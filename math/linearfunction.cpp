#include "math/linearfunction.h"

LinearFunction::LinearFunction(double a, double b) {
    this->a = a;
    this->b = b;
}

double LinearFunction::getA() {
    return a;
}

double LinearFunction::getB() {
    return b;
}

double LinearFunction::countY(double x) {
    return this->getA() * x + this->getB();
}

Vertex* LinearFunction::countIntersection(LinearFunction* func) {
    double x = (func->getB() - this->getB()) / (this->getA() - func->getA());
    return new Vertex(x, this->countY(x));
}

std::string LinearFunction::toString(){
    return "y="+std::to_string(a)+"x+"+std::to_string(b);
}