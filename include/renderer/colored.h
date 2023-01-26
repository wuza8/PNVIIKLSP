#include "color.h"

#ifndef COLORED_H
#define COLORED_H

class Colored{
private:
    Color color;
public:
    Color getColor();
    void setColor(Color color);
};

#endif