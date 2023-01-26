#include <vector>
#include <random>
#include <string>
#include "math/triangle.h"
#include "math/linearfunction.h"
#include "math/wezel.h"

#ifndef SERVICES_FUNCTION_H
#define SERVICES_FUNCTION_H

class FunctionService{
public:
    static void addFunction(LinearFunction* function);
    static void addManyFunctions(std::vector<LinearFunction*> functions);
    static std::vector<LinearFunction*> getFunctions();
    static std::vector<Vertex> countVertices();
    static std::vector<Triangle> triangulizeVertices();
    static std::vector<Wezel> znajdzWezly();
    static float obliczObwod();
    static std::vector<Triangle> allTriangles();
};

#endif