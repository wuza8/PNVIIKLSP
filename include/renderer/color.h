#ifndef COLOR_H
#define COLOR_H

class Color{
    int r=0,g = 0,b = 0;
public:
    Color();
    Color(int r, int g, int b);
    int getR();
    int getG();
    int getB();
};

#endif