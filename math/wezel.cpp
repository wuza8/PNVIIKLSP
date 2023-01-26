#include "math/wezel.h"

Wezel::Wezel(LinearFunction * functions[2], Vertex point){
    this->functions[0] = functions[0];
    this->functions[1] = functions[1];
    this->point = point;
}