
#include "math/vertex.h"

Vertex::Vertex(double x, double y) {
    this->x = x;
    this->y = y;
}

Vertex::Vertex(bool valid){
    this->valid = valid;
}

double Vertex::getX(){
    return x;
}
double Vertex::getY(){
    return y;
}

bool Vertex::isValid(){
    return this->valid;
}

std::ostream& operator<<(std::ostream& os, const Vertex& v){
    os<<"["<<v.x<<", "<<v.y<<"]";
}

Vertex::Vertex(){}
