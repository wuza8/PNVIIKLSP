#include <vector>
#include "math/linearfunction.h"
#include "cmdline/cmdfunctionloader.h"
#include "math/vertex.h"
#include "cmdline/cmdregistry.h"
#include "cmdline/inlinecommandhandler.h"
#include "cmdline/helpcommand.h"
#include "cmdline/commandhandler.h"
#include "services/functionservice.h"
#include "renderer/renderer.h"

#ifndef PNVIIKLSP_H
#define PNVIIKLSP_H

void drawProgram(){
    //Render grid
    for(float x = -100;x<100;x++)
        Renderer::line(x,-100,x,+100, 100,100,100);
    
    for(float y = -100;y<100;y++)
        Renderer::line(-100,y,+100,y, 100,100,100);
    
    Renderer::line(-100, 0, 100,0);
    Renderer::line(0, 100,0, -100);

    //Render functions
    for(LinearFunction* func : FunctionService::getFunctions()){
        Renderer::line(-100, func->countY(-100), 100, func->countY(100));
    }

    
}

class PNVIIKLSP{
    
    CommandRegistry commandRegistry;

    

    void bootstrap(int argc, char *argv[]){
        std::cout<<"Witaj w PNVIIKLSP! Aby poznać listę komand wpisz \'help\'"<<std::endl;
        if(argc > 1)
            FunctionService::addManyFunctions(CmdFunctionLoader::loadFunctionsFromArgs(argc,argv));
    }

    void cmdlineLoop(){
        std::string command;
        std::cout<<">>";

        while(std::getline(std::cin, command)){
            commandRegistry.executeCommand(command);
            std::cout<<">>";
        }
    }

public:
    void start(int argc, char *argv[]){
        int ile_funkcji = 4;
        bootstrap(argc,argv);

        CommandRegistry* cmdreg = &commandRegistry;

        commandRegistry.registerCommandHandler(new HelpCommand(&commandRegistry));

        commandRegistry.registerCommandHandler(new InlineCommandHandler("quit", "wychodzi z programu",[](std::string args){
            exit(0);
        }));

        commandRegistry.registerCommandHandler(new InlineCommandHandler("clear", "czyści cmdline",[](std::string args){
            for(int i=0;i<100;i++){
                std::cout<<std::endl;
            }
        }));

        commandRegistry.registerCommandHandler(
            new InlineCommandHandler("showfunc", "pokazuje listę wpisanych funkcji w programie",[](std::string args)
        {
            if(FunctionService::getFunctions().size() == 0){
                std::cout<<"W programie nie ma jeszcze żadnych funkcji, użyj komendy addfunc a b, aby dodać nową komendę."<<std::endl;
                return;
            }

            std::cout<<"Lista funkcji:"<<std::endl;

            int num = 1;

            for(LinearFunction* func : FunctionService::getFunctions()){
                std::cout<<num++<<". "<<func->toString()<<std::endl;
            }
        }));

        commandRegistry.registerCommandHandler(
            new InlineCommandHandler("addfunc", "dodaje do rejestru nową funkcję",[](std::string args)
        {
            double a, b;
            std::string name;
            std::stringstream ss(args);
            ss>>name>>a>>b;
            LinearFunction* func = new LinearFunction(a,b);
            FunctionService::addFunction(func);
            std::cout<<"Dodano funkcję "<<func->toString()<<std::endl;
        }));

        commandRegistry.registerCommandHandler(
            new InlineCommandHandler("showpoints", "oblicza punkty przecięć pomiędzy funkcjami",[](std::string args)
        {
            std::vector<Vertex*> vertices = FunctionService::countVertices();

            std::cout << "Twoje funkcje przecinają się w " << vertices.size() << " punktach: " << std::endl;
            for(Vertex* v : vertices){
                std::cout<<"\tPunkt ("<<v->getX()<<", "<<v->getY()<<")"<<std::endl;
            }
        }));

        //Initializacja renderera
        Renderer::init();
        Renderer::setDrawProgram(drawProgram);

        cmdlineLoop();

        // vector<Vertex*> vertices = CmdFunctionLoader::countVertices(functions);
        // CmdFunctionLoader::distinctVertices(vertices);
        // CmdFunctionLoader::displayVerticesInfo(vertices);
    }  
};

#endif