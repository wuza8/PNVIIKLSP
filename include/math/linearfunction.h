#include "math/vertex.h"

#ifndef MATH_LINEARFUNCTION_H
#define MATH_LINEARFUNCTION_H

class LinearFunction {
    double a, b;

public:
    LinearFunction(double a, double b);

    double getA();

    double getB();
    //TODO testy
    double countY(double x);

    /*
    Counts function intersection point with each other

    Returns nullptr if intersection doesn't exist
    */
    //TODO coś nie tak, bo nie zwróci nigdy nulla, ale to poootem xD
    //TODO testy
    Vertex* countIntersection(LinearFunction* func);
};
#endif