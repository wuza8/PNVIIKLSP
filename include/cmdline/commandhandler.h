#include <string>
#ifndef CMDLINE_COMMANDHANDLER_H
#define CMDLINE_COMMANDHANDLER_H

class CommandHandler{
public:
    virtual std::string getCommandName() = 0;
    virtual void executeCommand(std::string args) = 0;
};

#endif