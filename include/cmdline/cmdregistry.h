#include <vector>
#include <string>
#include <sstream>
#include "cmdline/commandhandler.h"
#include <iostream>

#ifndef CMDLINE_CMDREGISTRY_H
#define CMDLINE_CMDREGISTRY_H

class CommandRegistry{
    std::vector<CommandHandler*> commandHandlers;

public:
    std::vector<CommandHandler*>* getCommandHandlers();
    void registerCommandHandler(CommandHandler* handler);
    void executeCommand(std::string command);
};

#endif