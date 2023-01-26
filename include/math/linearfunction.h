#include "math/vertex.h"
#include "renderer/colored.h"
#include "utils/named.h"
#include <string>
#ifndef MATH_LINEARFUNCTION_H
#define MATH_LINEARFUNCTION_H

class LinearFunction : public Colored , public Named{
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
    Vertex countIntersection(LinearFunction* func);

    std::string toString();
};
#endif