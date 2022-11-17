#include "cmdline/commandhandler.h"

#ifndef CMDLINE_INLINECOMMANDHANDLER_H
#define CMDLINE_INLINECOMMANDHANDLER_H

class InlineCommandHandler : public CommandHandler{
    void (*commandFunction)(std::string);
    std::string commandName;
    std::string commandDescription;

public:
    InlineCommandHandler(std::string name, std::string description, void (*commandFunction)(std::string));
    virtual std::string getCommandName();
    virtual std::string getDescription();
    virtual void executeCommand(std::string args);
};

#endif