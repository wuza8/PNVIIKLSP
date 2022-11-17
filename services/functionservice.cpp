#include "services/functionservice.h"

static std::vector<LinearFunction*> functions;

void FunctionService::addFunction(LinearFunction* function){
    functions.push_back(function);
}

void FunctionService::addManyFunctions(std::vector<LinearFunction*> functionsToAdd){
    for(auto function : functionsToAdd){
        FunctionService::addFunction(function);
    }
}

std::vector<LinearFunction*> FunctionService::getFunctions(){
    return functions;
}

std::vector<Vertex*> FunctionService::countVertices() {
    std::vector<Vertex*> vertices;
    for(int i=0;i<functions.size()-1;i++)
        for (int j = i + 1; j < functions.size(); j++)
        {
            Vertex* vertex = functions[i]->countIntersection(functions[j]);
            if (vertex != NULL) vertices.push_back(vertex);
        }
    return vertices;
}