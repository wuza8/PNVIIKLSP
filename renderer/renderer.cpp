#include "renderer/renderer.h"
#include <SDL2/SDL.h>
#include <thread>
#include <iostream>

SDL_Window * win;
SDL_Renderer * rend;
std::thread * rendererThread;

void (*drawProgram)() = NULL;

float posX = 0;
float posY = 0;

int width = 1000;
int height = 1000;

int blockSize = 50;

void clear(){
    SDL_SetRenderDrawColor( rend, 0x00, 0x00, 0x00, 0xFF );
    SDL_RenderClear(rend);
}
void present(){
    SDL_RenderPresent(rend);
}

bool isLeftMouseButtonClicked = false;

void mouseMovement(SDL_MouseMotionEvent *event){
    if(isLeftMouseButtonClicked == true){
        posX += (float) event->xrel / blockSize;
        posY += (float) event->yrel / blockSize;
    }
}

void buttonDownEvent(SDL_KeyboardEvent *event){
    if(event->keysym.scancode == SDL_SCANCODE_KP_PLUS){
        blockSize+=1;
    }
    else if(event->keysym.scancode == SDL_SCANCODE_KP_MINUS){
        blockSize-=1;
    }
}

void startLoop(){
    while(true){
        clear();
        if(drawProgram != NULL){
            drawProgram();
        }
        present();

        SDL_Event event;

        while(SDL_PollEvent(&event)){
            switch(event.type){
                case SDL_QUIT:
                    exit(0);
                case SDL_MOUSEMOTION:
                    mouseMovement((SDL_MouseMotionEvent*) &event); break;
                case SDL_MOUSEBUTTONDOWN:
                    isLeftMouseButtonClicked = true; break;
                case SDL_MOUSEBUTTONUP:
                    isLeftMouseButtonClicked = false; break;
                case SDL_KEYDOWN:
                    buttonDownEvent((SDL_KeyboardEvent*) &event);
            }
        }

        SDL_Delay(1000/60);
    }
}

void Renderer::init(){
	// returns zero on success else non-zero
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
		printf("error initializing SDL: %s\n", SDL_GetError());
	}
	win = SDL_CreateWindow("PNVIIKLSP", // creates a window
									SDL_WINDOWPOS_CENTERED,
									SDL_WINDOWPOS_CENTERED,
									width, height, SDL_WINDOW_RESIZABLE);

    if (win == 0) {
		printf("error creating window SDL: %s\n", SDL_GetError());
	}

	// triggers the program that controls
	// your graphics hardware and sets flags
	Uint32 render_flags = SDL_RENDERER_ACCELERATED;

	// creates a renderer to render our images
	rend = SDL_CreateRenderer(win, -1, render_flags);

    rendererThread = new std::thread(startLoop);
}

void drawLine(int x1, int y1, int x2, int y2, int colR=255, int colG=0, int colB=0){
    SDL_SetRenderDrawColor( rend, colR, colG, colB, 0xFF );
    SDL_RenderDrawLine(rend, x1, y1, x2, y2);
}

void drawMesh(){

    int gray = 0x22;

    //Horizontal
    int padding = (int) (blockSize * posX) % blockSize;
    for(int start = padding; start <= width; start+=blockSize){
        drawLine(start, 0, start, height, gray,gray,gray);
    }

    //Vertical
    padding = (int) (blockSize * posY) % blockSize;
    for(int start = padding; start <= height; start+=blockSize){
        drawLine(0, start, width, start,gray,gray,gray);
    }
}

void Renderer::line(float x1, float y1, float x2, float y2, Color color){
    y1 = -y1;
    y2 = -y2;
    drawLine((int) (blockSize*x1 + posX*blockSize) + width/2, (int) (blockSize*y1 + posY*blockSize) + height/2,
    (int) (blockSize*x2 + posX*blockSize) + width/2, (int) (blockSize*y2 + posY*blockSize) + height/2, color.getR(), color.getG(), color.getB());
}

void Renderer::setDrawProgram(void (*program)()){
    drawProgram = program;
}



void drawPoint(int x, int y, Color color){
    int s = 2;
    SDL_Rect fillRect = { x - s, y - s, s*2, s*2};
    SDL_SetRenderDrawColor( rend, color.getR(), color.getG(), color.getB(), 0xFF );
    SDL_RenderFillRect( rend, &fillRect );
}

int xcount(float x){
    return (int) (blockSize*x + posX*blockSize) + width/2;
}

int ycount(float y){
    y = -y;
    return (int) (blockSize*y + posY*blockSize) + height/2;
}

void Renderer::point(float x, float y, Color color){
    y = -y;
    drawPoint((int) (blockSize*x + posX*blockSize) + width/2, (int) (blockSize*y + posY*blockSize) + height/2, color);
}

int trInter = 100;

void Renderer::triangle(float x1, float y1, float x2, float y2, float x3, float y3){
    
    //count vector to interpolate
    int interCount = trInter;
    int interCountStart = interCount;
    

    float xint = (x3 - x2) / interCount;
    float yint = (y3 - y2) / interCount;

    for(float x = x2, y = y2; interCount-->0; x+=xint, y+=yint){
        line(x1, y1, x, y, Color((int)(100.0 * (float)(interCount * 1.0 / interCountStart * 1.0)) + 155,0,0));
    }
}

void Renderer::triangleInterpolation(int num){
    trInter = num;
}



void Renderer::close(){
    // destroy renderer
	SDL_DestroyRenderer(rend);

	// destroy window
	SDL_DestroyWindow(win);
	
	// close SDL
	SDL_Quit();
}
