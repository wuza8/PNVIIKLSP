#include "renderer/color.h"

int Color::getR(){
    return r;
}

int Color::getG(){
    return g;
}

int Color::getB(){
    return b;
}

Color::Color(){}

Color::Color(int r, int g, int b){
    this->r = r;
    this->g = g;
    this->b = b;
}

SDL_Color Color::toSDLColor(){
    return {r,g,b};
}
