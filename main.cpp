#include <iostream>
#include <vector>
#include <sstream>
#include "pnviiklsp.h"
#include <list>

using namespace std;

CommandRegistry commandRegistry;

void drawProgram(){
    //Render grid
    Color smallGridColor = Color(100,100,100);
    Color bigGridColor = Color(120,180,120);
    Color pointColor = Color(255,0,0);

    for(float x = -100;x<100;x++)
        Renderer::line(x,-100,x,+100, smallGridColor);
    
    for(float y = -100;y<100;y++)
        Renderer::line(-100,y,+100,y, smallGridColor);
    
    Renderer::line(-100, 0, 100,0, bigGridColor);
    Renderer::line(0, 100,0, -100, bigGridColor);

    //Render functions
    for(LinearFunction* func : FunctionService::getFunctions()){
        Renderer::line(-100, func->countY(-100), 100, func->countY(100), func->getColor());
    }

    //Render points
    for(Vertex point : FunctionService::countVertices()){
        Renderer::point(point.getX(), point.getY(), pointColor);
    }

    //Render triangles
    for(Triangle triangle : FunctionService::triangulizeVertices()){
        Renderer::triangle(
            triangle.getVertexes()[0].getX(), triangle.getVertexes()[0].getY(),
            triangle.getVertexes()[1].getX(), triangle.getVertexes()[1].getY(),
            triangle.getVertexes()[2].getX(), triangle.getVertexes()[2].getY()
        );
    }
}

void loadFunctionsFromCmdLine(int argc, char *argv[]){
    
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

void registerCommands(){
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
        std::vector<Vertex> vertices = FunctionService::countVertices();

        std::cout << "Twoje funkcje przecinają się w " << vertices.size() << " punktach: " << std::endl;
        for(Vertex v : vertices){
            std::cout<<"\tPunkt ("<<v.getX()<<", "<<v.getY()<<")"<<std::endl;
        }
    }));

    commandRegistry.registerCommandHandler(
        new InlineCommandHandler("info", "pokazuje informacje o funkcjach i trójkątach",[](std::string args)
    {
        std::cout<<"Lista funkcji:"<<std::endl;

        int num = 1;

        for(LinearFunction* func : FunctionService::getFunctions()){
            std::cout<<num++<<". "<<func->toString()<<std::endl;
        }

        std::vector<Vertex> vertices = FunctionService::countVertices();

        std::cout << "Twoje funkcje przecinają się w " << vertices.size() << " punktach: " << std::endl;
        for(Vertex v : vertices){
            std::cout<<"\tPunkt ("<<v.getX()<<", "<<v.getY()<<")"<<std::endl;
        }

        std::vector<Triangle> triangles = FunctionService::triangulizeVertices();

        std::cout << "Tworzą one " << triangles.size() << " trójkąty:" << std::endl;

        int numb = 1;
        float razem = 0;
        for(Triangle t : triangles){
            std::cout<<"Numer " <<numb++<< " o powierzchni "<<t.countArea()<< t.getVertexes()[0] <<std::endl;
            razem += t.countArea();
        }

        std::cout<<std::endl<<"Łączna powierzchnia: "<<razem<<std::endl;

        std::cout<<"Obwód tworzonego węzła: "<<FunctionService::obliczObwod()<<std::endl;
    }));

    commandRegistry.registerCommandHandler(
        new InlineCommandHandler("wezly", "wezly",[](std::string args)
    {

        std::vector<Wezel> wezly = FunctionService::znajdzWezly();
        
        std::cout<<"Funkcje tworza wezly: "<<std::endl;

        for(Wezel w : wezly){
            std::cout<<"Wezel "<< w.functions[0]->getName() << w.functions[1]->getName() << " w miejscu "<<w.point;
        }

        std::vector<Wezel> sekwencja;
        bool wezelDobry = true;

        std::cout<<"Łączenie wezlow w sekwencje"<<std::endl;
        sekwencja.push_back(wezly[0]);
        wezly.erase(wezly.begin()+0);

        while(wezly.size()!=0){
            LinearFunction** szukane = sekwencja[sekwencja.size()-1].functions;
            int punkt = -1;
            for(int i=0;i<wezly.size();i++){
                Wezel w = wezly[i];
                if(w.functions[0] == szukane[0] || w.functions[0] == szukane[1] || w.functions[1] == szukane[0] || w.functions[1] == szukane[1]){
                    punkt = i;
                    break;
                }
            }

            if(punkt == -1) {
                wezelDobry=false;
                break;
            }

            Wezel w = wezly[punkt];
            sekwencja.push_back(w);
            wezly.erase(wezly.begin()+punkt);
        }

        std::cout<<"Sekwencja wezlow:"<<std::endl;

        for(Wezel w : sekwencja){
            std::cout<< w.functions[0]->getName() << w.point << w.functions[1]->getName() << " >> ";
        }

        
    }));
}

int main(int argc, char *argv[]) {
    std::cout<<"Witaj w PNVIIKLSP! Aby poznać listę komand wpisz \'help\'"<<std::endl;

    loadFunctionsFromCmdLine(argc,argv);
    registerCommands();

    //Initializacja renderera
    Renderer::init();
    Renderer::setDrawProgram(drawProgram);

    cmdlineLoop();

    // vector<Vertex*> vertices = CmdFunctionLoader::countVertices(functions);
    // CmdFunctionLoader::distinctVertices(vertices);
    // CmdFunctionLoader::displayVerticesInfo(vertices);
}

void parseCommand(std::string commandData){
    std::stringstream stream(commandData);

    string command;
    stream>>command;
}