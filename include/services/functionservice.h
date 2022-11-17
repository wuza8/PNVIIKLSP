#include <vector>
#include "math/linearfunction.h"

#ifndef SERVICES_FUNCTION_H
#define SERVICES_FUNCTION_H

class FunctionService{
public:
    static void addFunction(LinearFunction* function);
    static void addManyFunctions(std::vector<LinearFunction*> functions);
    static std::vector<LinearFunction*> getFunctions();
    static std::vector<Vertex*> countVertices();
};

#endif