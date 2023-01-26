#include "services/functionservice.h"

static std::vector<LinearFunction*> functions;

std::random_device dev;
std::mt19937 rng(dev());
std::uniform_int_distribution<std::mt19937::result_type> dist255(0,255);

std::vector<Vertex*> vertices;

char lastName = 'A';

Color randomColor(){
    return Color(dist255(rng), dist255(rng), dist255(rng));  
}

void FunctionService::addFunction(LinearFunction* function){
    function->setColor(randomColor());
    function->setName(std::string(1, lastName));
    lastName++;
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

std::vector<Vertex> FunctionService::countVertices() {
    std::vector<Vertex> vertices;

    for(int i=0;i<functions.size()-1;i++)
        for (int j = i + 1; j < functions.size(); j++)
        {
            Vertex vertex = functions[i]->countIntersection(functions[j]);
            if (vertex.isValid()) vertices.push_back(vertex);
        }
    return vertices;
}

std::vector<Triangle> FunctionService::triangulizeVertices() {
    std::vector<Triangle> triangles;
    std::vector<Wezel> wezly = FunctionService::znajdzWezly();

    int funcPointer = 0;

    for(int ile=0;ile<functions.size()-2;ile++){
        Vertex vertexes[3];
        for(int i=0;i<3;i++){
            vertexes[i] = wezly[(funcPointer++)%functions.size()].point;
        }
        funcPointer--;
        triangles.push_back(Triangle(vertexes[0], vertexes[1],vertexes[2]));
    }

    return triangles;
}

float FunctionService::obliczObwod(){
    std::vector<Wezel> wezly = FunctionService::znajdzWezly();
    int funcPointer = 0;
    float wynik = 0;
    for(int ile=0;ile<wezly.size();ile++){
        Vertex vertexes[2];
        for(int i=0;i<2;i++){
            vertexes[i] = wezly[(funcPointer++)%functions.size()].point;
        }
        funcPointer--;
        wynik += Line(vertexes[0], vertexes[1]).countLength();
    }
    return wynik;
}

std::vector<Wezel> FunctionService::znajdzWezly(){
    std::vector<Wezel> wezly;

    for(int i=0;i<functions.size()-1;i++)
        for (int j = i + 1; j < functions.size(); j++)
        {
            Vertex vertex = functions[i]->countIntersection(functions[j]);
            LinearFunction* func[2];
            func[0] = functions[i];
            func[1] = functions[j];
            if (vertex.isValid()) wezly.push_back(Wezel(func, vertex));
        }
    std::vector<Wezel> sekwencja;
    bool wezelDobry = true;

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

    return sekwencja;
}