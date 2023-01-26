#include "math/line.h"

Line::Line(Vertex vertex1, Vertex vertex2){
    vertexes[0] = vertex1;
    vertexes[1] = vertex2;
}

float Line::countLength(){
    float a = vertexes[0].getX() - vertexes[1].getX();
    float b = vertexes[0].getY() - vertexes[1].getY();

    if(a<0) a *= -1;
    if(b<0) b *= -1;

    return sqrt(a*a + b*b);
}