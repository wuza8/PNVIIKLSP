#include <iostream>
#include <vector>

using namespace std;

class Vertex {
    double x, y;
    public:
    Vertex(double x, double y) {
        this->x = x;
        this->y = y;
    }

    double getX(){
        return x;
    }
    double getY(){
        return y;
    }
};

class LinearFunction {
    double a, b;

public:
    LinearFunction(double a, double b) {
    this->a = a;
    this->b = b;
    }

    double getA() {
        return a;
    }

    double getB() {
        return b;
    }
    //TODO testy
    double countY(double x) {
        return this->getA() * x + this->getB();
    }

    /*
    Counts function intersection point with each other

    Returns nullptr if intersection doesn't exist
    */
    //TODO coś nie tak, bo nie zwróci nigdy nulla, ale to poootem xD
    //TODO testy
    Vertex* countIntersection(LinearFunction* func) {
        double x = (func->getB() - this->getB()) / (this->getA() - func->getA());
        return new Vertex(x, this->countY(x));
    }
};

//TODO testy
void loadFunctions(vector<LinearFunction*>& functions, int count) {
    for (int i = 1; i <= count; i++) {
    double a, b;
    cout << "Podaj funkcję nr. " << i << endl;
    cout << "\t a="; cin >> a;
    cout << "\t b="; cin >> b;
    functions.push_back(new LinearFunction(a, b));
}
}

vector<LinearFunction*> loadFunctionsFromCmdLine(int argc, char *argv[]) {
    vector<LinearFunction*> functions;
    cout<<argc<<endl;
    if(argc % 2 != 1){
        cout<<"Podaj parzystą ilość argumentów!"<<endl;
        exit(1);
    }
    int nums = (argc-1) / 2;
    for (int i = 1; i < argc; i+=2) {
        double a, b;
        a = stoi(argv[i]);
        b = stoi(argv[i+1]);
        functions.push_back(new LinearFunction(a, b));
    }
    return functions;
}

//TODO testy
vector<Vertex*> countVertices(vector<LinearFunction*> & functions) {
    vector<Vertex*> vertices;
    for(int i=0;i<functions.size()-1;i++)
        for (int j = i + 1; j < functions.size(); j++)
        {
            Vertex* vertex = functions[i]->countIntersection(functions[j]);
            cout<<vertex->getX()<<" "<<vertex->getY()<<endl;
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
    setlocale(LC_CTYPE, "Polish");


    vector<LinearFunction*> functions;
    int ile_funkcji = 4;
    if(argc > 1)
        functions = loadFunctionsFromCmdLine(argc,argv);
    else
        loadFunctions(functions, ile_funkcji);
    
    vector<Vertex*> vertices = countVertices(functions);
    distinctVertices(vertices);
    displayVerticesInfo(vertices);
}