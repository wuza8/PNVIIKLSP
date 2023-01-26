#include "math/vertex.h"
#include "math/line.h"
#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle{
    Vertex vertexes[3];
public:
    Triangle(Vertex vertex1, Vertex vertex2, Vertex vertex3);

    float countArea();
    float countObwod();
    Vertex * getVertexes();

    std::string getName();
    int getHash();
};

#endif