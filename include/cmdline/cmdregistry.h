#include <vector>
#include "cmdline/commandhandler.h"

#ifndef CMDLINE_CMDREGISTRY_H
#define CMDLINE_CMDREGISTRY_H

class CommandRegistry{
    std::vector<CommandHandler*> commandHandlers;

public:
    void registerCommandHandler(CommandHandler* handler);
    void executeCommand(std::string command);
};

#endif