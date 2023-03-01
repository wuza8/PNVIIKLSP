#include <iostream>
#include <vector>
#include <sstream>
#include "pnviiklsp.h"
#include <list>

using namespace std;

CommandRegistry commandRegistry;

class RenderableObject{
public:
    virtual void onButtonClick(SDL_KeyboardEvent * event) = 0;
    virtual void renderProgram() = 0;
    virtual void onScreenClick(int x, int y) = 0;
};

class Button : public RenderableObject{
    public:
    std::string text;
    int x,y,w=80,h=26;
    void (*onClick)();

    Button(int x, int y, std::string text){
        this->x = x;
        this->y = y;
        this->text = text;
    }

    virtual void renderProgram(){
        Renderer::textOnScreen(x,y,20, text, Color(255,0,0));
        Renderer::rectOnScreen(x-2,y-2, w, h, Color(255,0,0));
    }

    virtual void onButtonClick(SDL_KeyboardEvent * event){}

    virtual void onScreenClick(int mx, int my){
        if(mx > x && mx < x+w && my > y && my < y+h){
            onClick();
        }
    };
};

Button * button;


class NumberWindow : public RenderableObject{
    
public:
    double number=0;
    std::string text;
    int x,y,w=80,h=26;
    bool active = false;

    NumberWindow(int x, int y, double number){
        this->x = x;
        this->y = y;
        text = to_string(number);

        //Roundup text
        while(text.find(".") != -1 && (text[text.size()-1] == '0' || text[text.size()-1] == '.')){
            text = text.substr(0, text.size() - 1);
        }
    }

    virtual void onButtonClick(SDL_KeyboardEvent * event){
        if(!active) return;

        if(text == "0")
            text = "";

        if(event->keysym.scancode == SDL_SCANCODE_0)
            text += "0";
        else if(event->keysym.scancode == SDL_SCANCODE_1)
            text += "1";
        else if(event->keysym.scancode == SDL_SCANCODE_2)
            text += "2";
        else if(event->keysym.scancode == SDL_SCANCODE_3)
            text += "3";
        else if(event->keysym.scancode == SDL_SCANCODE_4)
            text += "4";
        else if(event->keysym.scancode == SDL_SCANCODE_5)
            text += "5";
        else if(event->keysym.scancode == SDL_SCANCODE_6)
            text += "6";
        else if(event->keysym.scancode == SDL_SCANCODE_7)
            text += "7";
        else if(event->keysym.scancode == SDL_SCANCODE_8)
            text += "8";
        else if(event->keysym.scancode == SDL_SCANCODE_9)
            text += "9";
        else if(event->keysym.scancode == 55)
            text += ".";
        else if(event->keysym.scancode == SDL_SCANCODE_KP_MINUS)
            text += "-";
        else if(event->keysym.scancode == SDL_SCANCODE_BACKSPACE)
            if(text.size() != 0){
                text = text.substr(0, text.size()-1);
            }
        
        if(text == ""){
            number = 0;
            text = "0";
        }
        else
            try{
                double n = stod(text);
                number = n;
            }
            catch(const std::exception& e){}
    }

    virtual void renderProgram(){
        Renderer::textOnScreen(x,y,20, text, Color(255,0,0));
        Renderer::rectOnScreen(x-2,y-2, w, h, (active ? Color(255,0,0) : Color(100,100,100)) );
    }

    virtual void onScreenClick(int mx, int my){
        if(mx > x && mx < x+w && my > y && my < y+h){
            active = true;
        }
        else {
            active = false;
        }
    };
};


class Text : public RenderableObject{
    
public:
    std::string text;
    int x,y;

    virtual void onButtonClick(SDL_KeyboardEvent * event){}

    virtual void renderProgram(){
        int line = 0;
        std::stringstream ss(text);
        std::string token;

        while(std::getline(ss, token, '\n')) {
            Renderer::textOnScreen(x,y+line++*22,20, token, Color(255,0,0));
        }
    }

    virtual void onScreenClick(int mx, int my){};
};

Text * triangsText;

class FunctionWindow : public RenderableObject {
public:
    int x,y;
    NumberWindow afunc, bfunc;
    LinearFunction * func;

    FunctionWindow(LinearFunction * func): afunc(10,10, func->getA()), bfunc(10,10, func->getB()){
        afunc.number = func->getA();
        bfunc.number = func->getB();
        this->func = func;
    }

    virtual void onButtonClick(SDL_KeyboardEvent * event){
        afunc.onButtonClick(event);
        bfunc.onButtonClick(event);
        func->setA(afunc.number);
        func->setB(bfunc.number);
    }

    virtual void renderProgram(){
        Renderer::textOnScreen(x, y, 25, "fn ", Color(255,0,0));
        Renderer::textOnScreen(x+25, y, 25, func->getName(), func->getColor());

        afunc.x = 60 + x;
        afunc.y = y;
        bfunc.x = 80 + 60 + 10 + x;
        bfunc.y = y;

        afunc.renderProgram();
        bfunc.renderProgram();
    }

    virtual void onScreenClick(int x, int y){
        afunc.onScreenClick(x,y);
        bfunc.onScreenClick(x,y);
    };
};

std::string triangs(){
    std::stringstream ss;
    ss<<"Informacja o wszystkich trojkatach:"<<std::endl;
    std::vector<Triangle> trojkaty = FunctionService::allTriangles();

    for(Triangle t : trojkaty){
        ss<<"Trojkat "<<t.getName()<<" Pole: "<<t.countArea()<<" Obwod: "<<t.countObwod()<<std::endl;
    }

    return ss.str();
}

std::vector<RenderableObject*> renderableObjects;

void drawProgram(){

    triangsText->text = triangs();
    //Render grid
    Color smallGridColor = Color(100,100,100);
    Color bigGridColor = Color(120,180,120);
    Color pointColor = Color(255,0,0);
    Color fontColor = Color(255,0,255);

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


    // //Render triangles
    // for(Triangle triangle : FunctionService::triangulizeVertices()){
    //     Renderer::triangle(
    //         triangle.getVertexes()[0].getX(), triangle.getVertexes()[0].getY(),
    //         triangle.getVertexes()[1].getX(), triangle.getVertexes()[1].getY(),
    //         triangle.getVertexes()[2].getX(), triangle.getVertexes()[2].getY()
    //     );
    // }
    //Render points
    for(Vertex point : FunctionService::countVertices()){
        Renderer::text(point.getX(), point.getY(),20, point.getName(), fontColor);
        Renderer::point(point.getX(), point.getY(), pointColor);
    }

    for(RenderableObject * renderable : renderableObjects){
        renderable->renderProgram();
    }
    button->renderProgram();
}

void buttonEventFunction(SDL_KeyboardEvent * event){
    for(RenderableObject * renderable : renderableObjects){
        renderable->onButtonClick(event);
    } 
}

void mouseClickEventFunction(int x, int y){
    for(RenderableObject * renderable : renderableObjects){
        renderable->onScreenClick(x,y);
    }

    button->onScreenClick(x,y);
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

void addNewFunction(double a, double b);

void newFunction(){
    addNewFunction(0,0);
}



void remakeFunctionRendering(){
    for(RenderableObject * renderable : renderableObjects){
        delete renderable;
    }

    renderableObjects.clear();

    int i = 1;

    for(LinearFunction * function : FunctionService::getFunctions()){
        FunctionWindow *functionWindow = new FunctionWindow(function);
        functionWindow->x = 10;
        functionWindow->y = 10 + i++*30;
        renderableObjects.push_back(functionWindow);
    }

    Text * text = new Text();
    text->text = triangs();
    text->x = 10;
    text->y = 10 + i * 30;

    triangsText = text;
    renderableObjects.push_back(text);
    
}

void addNewFunction(double a, double b){
    LinearFunction* func = new LinearFunction(a,b);
    FunctionService::addFunction(func);
    std::cout<<"Dodano funkcję "<<func->toString()<<std::endl;
    remakeFunctionRendering();
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
        addNewFunction(a,b);
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

    commandRegistry.registerCommandHandler(
        new InlineCommandHandler("triangs", "info o wszystkich trójkatach",[](std::string args)
    {
        std::cout<<triangs();
    }));
}

int main(int argc, char *argv[]) {
    std::cout<<"Witaj w PNVIIKLSP! Aby poznać listę komand wpisz \'help\'"<<std::endl;

    loadFunctionsFromCmdLine(argc,argv);
    registerCommands();

    button = new Button(10, 10, "New function");
    button->w = 160;
    button->onClick = [](){addNewFunction(0,0);};

    //Initializacja renderera

    remakeFunctionRendering();
    Renderer::init();
    Renderer::setDrawProgram(drawProgram);
    Renderer::setButtonEventFunction(buttonEventFunction);
    Renderer::setMouseClickEventFunction(mouseClickEventFunction);

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