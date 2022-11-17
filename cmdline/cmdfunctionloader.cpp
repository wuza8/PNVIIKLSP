#include "cmdline/cmdfunctionloader.h"

    void CmdFunctionLoader::loadFunctions(std::vector<LinearFunction*>& functions, int count) {
        for (int i = 1; i <= count; i++) {
            double a, b;
            std::cout << "Podaj funkcję nr. " << i << std::endl;
            std::cout << "\t a="; std::cin >> a;
            std::cout << "\t b="; std::cin >> b;
            functions.push_back(new LinearFunction(a, b));
        }
    }

    std::vector<LinearFunction*> loadFunctionsFromArgs(int argc, char *argv[]) {
        std::vector<LinearFunction*> functions;
        if(argc % 2 != 1){
            std::cout<<"Podaj parzystą ilość argumentów!"<<std::endl;
            std::exit(1);
        }

        int nums = (argc-1) / 2;
        for (int i = 1; i < argc; i+=2) {
            double a, b;
            a = std::stoi(argv[i]);
            b = std::stoi(argv[i+1]);
            functions.push_back(new LinearFunction(a, b));
        }

        return functions;
    }