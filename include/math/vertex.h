#include <iostream>
#include "utils/named.h"

#ifndef MATH_VERTEX_H
#define MATH_VERTEX_H

class Vertex : public Named{
    double x, y;
    bool valid = true;
public:
    Vertex(double x, double y);
    Vertex(bool valid);
    Vertex();
    double getX();
    double getY();

    bool isValid();

    friend std::ostream& operator<<(std::ostream& os, const Vertex& dt);
};

#endif