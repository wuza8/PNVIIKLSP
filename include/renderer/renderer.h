#ifndef RENDERER_H
#define RENDERER_H
#include <string>
#include "renderer/color.h"

namespace Renderer{
    void init();
    void line(float x1, float y1, float x2, float y2, Color color);
    void point(float x, float y, Color color);
    void triangle(float x1, float y1, float x2, float y2, float x3, float y3);
    void triangleInterpolation(int num);
    void close();
    void setDrawProgram(void (*foo)());
    void text(float x, float y, std::string text);
    void number(float x, float y, char c, Color color);
}


#endif