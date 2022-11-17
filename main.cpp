#include <iostream>
#include <vector>
#include <sstream>
#include "math/linearfunction.h"
#include "math/vertex.h"
#include "pnviiklsp.h"

using namespace std;

//TODO testy


//TODO testy


void displayVerticesInfo(vector<Vertex*> vertices) {
    
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