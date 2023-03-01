#include <string>
#include "renderer/color.h"
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL.h>
#include <thread>
#include <map>
#include <iostream>

#ifndef RENDERER_H
#define RENDERER_H

namespace Renderer{
    void init();
    void line(float x1, float y1, float x2, float y2, Color color);
    void lineOnScreen(int x1, int y1, int x2, int y2, Color color);
    void point(float x, float y, Color color);
    void triangle(float x1, float y1, float x2, float y2, float x3, float y3);
    void triangleInterpolation(int num);
    void close();
    void setDrawProgram(void (*foo)());
    void text(float x, float y, int fontSize, std::string text, Color color);
    void textOnScreen(int x, int y, int fontSize, std::string text, Color color);
    void setButtonEventFunction( void (*fun)(SDL_KeyboardEvent* event) );

    void rectOnScreen(int x, int y, int w, int h, Color color);

    void setMouseClickEventFunction(void (*mouse)(int, int));
}


#endif