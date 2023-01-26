#include "math/linearfunction.h"
#ifndef WEZEL_H
#define WEZEL_H

class Wezel{
public:
    LinearFunction * functions[2];
    Vertex point;

    Wezel(LinearFunction * functions[2], Vertex point);
    Wezel();
};

#endif