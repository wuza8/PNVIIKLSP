#include "math/vertex.h"
#include <cmath>

#ifndef LINE_H
#define LINE_H

class Line{
    Vertex vertexes[2];
public:
    Line(Vertex vertex1, Vertex vertex2);

    float countLength();
};

#endif