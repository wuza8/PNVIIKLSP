#include "math/linearfunction.h"
#include <vector>
#include <iostream>


#ifndef CMDLINE_CMDFUNCTIONLOADER_H
#define CMDLINE_CMDFUNCTIONLOADER_H

namespace CmdFunctionLoader {

    /***
     * Loads functions from cmd interactively
    ***/
    void loadFunctions(std::vector<LinearFunction*>& functions, int count);
    std::vector<LinearFunction*> loadFunctionsFromArgs(int argc, char *argv[]);
}

#endif