#include <SDL2/SDL.h>
#ifndef COLOR_H
#define COLOR_H

class Color{
    unsigned char r=0,g = 0,b = 0;
public:
    Color();
    Color(int r, int g, int b);
    int getR();
    int getG();
    int getB();

    SDL_Color toSDLColor();
};

#endif