#include <vector>
#include "math/linearfunction.h"
#include "cmdline/cmdfunctionloader.h"
#include "math/vertex.h"
#include "cmdline/cmdregistry.h"
#include "cmdline/inlinecommandhandler.h"

#ifndef PNVIIKLSP_H
#define PNVIIKLSP_H

class PNVIIKLSP{
    std::vector<LinearFunction*> functions;

    void bootstrap(int argc, char *argv[]){
        std::cout<<"Witaj w PNVIIKLSP! Aby poznać listę komand wpisz \'help\'"<<std::endl;
        if(argc > 1)
            functions = CmdFunctionLoader::loadFunctionsFromArgs(argc,argv);
    }

public:
    void start(int argc, char *argv[]){
        int ile_funkcji = 4;
        bootstrap(argc,argv);
        
        CommandRegistry commandRegistry;

        commandRegistry.registerCommandHandler(new InlineCommandHandler("help",[](std::string args){

        }));

        // vector<Vertex*> vertices = CmdFunctionLoader::countVertices(functions);
        // CmdFunctionLoader::distinctVertices(vertices);
        // CmdFunctionLoader::displayVerticesInfo(vertices);
    }  
};

#endif