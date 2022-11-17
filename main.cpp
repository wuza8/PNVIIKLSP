#include <iostream>
#include <vector>
#include <sstream>
#include "math/linearfunction.h"
#include "math/vertex.h"
#include "pnviiklsp.h"

using namespace std;

//TODO testy


//TODO testy
vector<Vertex*> countVertices(vector<LinearFunction*> & functions) {
    vector<Vertex*> vertices;
    for(int i=0;i<functions.size()-1;i++)
        for (int j = i + 1; j < functions.size(); j++)
        {
            Vertex* vertex = functions[i]->countIntersection(functions[j]);
            if (vertex != NULL) vertices.push_back(vertex);
        }
    return vertices;
}

void displayVerticesInfo(vector<Vertex*> vertices) {
    cout << "Twoje funkcje przecinają się w " << vertices.size() << " punktach: " << endl;
    for(Vertex* v : vertices){
        cout<<"\tPunkt ("<<v->getX()<<", "<<v->getY()<<")"<<endl;
    }
}

//TODO testy
void distinctVertices(vector<Vertex*> vertices) {

}

int main(int argc, char *argv[]) {
    PNVIIKLSP program;
    program.start(argc,argv);
}

void parseCommand(std::string commandData){
    std::stringstream stream(commandData);

    string command;
    stream>>command;
}