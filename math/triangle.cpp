#include "math/triangle.h"

Triangle::Triangle(Vertex vertex1, Vertex vertex2, Vertex vertex3)
{
    vertexes[0] = vertex1;
    vertexes[1] = vertex2;
    vertexes[2] = vertex3;
}

float Triangle::countArea(){
    float a = Line(vertexes[0], vertexes[1]).countLength();
    float b = Line(vertexes[1], vertexes[2]).countLength();
    float c = Line(vertexes[2], vertexes[0]).countLength();

    float p = (a + b + c) / 2;
    float P = sqrt(p*(p-a)*(p-b)*(p-c));

    return P;
}

float Triangle::countObwod(){
    return Line(&vertexes[0], &vertexes[1]).countLength() + Line(&vertexes[1], &vertexes[2]).countLength() + Line(&vertexes[2], &vertexes[0]).countLength();
}

Vertex* Triangle::getVertexes(){
    return vertexes;
}