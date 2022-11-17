#include "cmdline/commandhandler.h"

#ifndef CMDLINE_INLINECOMMANDHANDLER_H
#define CMDLINE_INLINECOMMANDHANDLER_H

class InlineCommandHandler : public CommandHandler{
    void (*commandFunction)(std::string);
    std::string commandName;

public:
    InlineCommandHandler(std::string name, void (*commandFunction)(std::string));
    virtual std::string getCommandName();
    virtual void executeCommand(std::string args);
};

#endif