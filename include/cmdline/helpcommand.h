#include "cmdline/commandhandler.h"
#include <iostream>
#include "cmdline/cmdregistry.h"

#ifndef CMDLINE_HELPCOMMAND_H
#define CMDLINE_HELPCOMMAND_H

class HelpCommand : public CommandHandler{
    CommandRegistry* cmdreg;

public:
    HelpCommand(CommandRegistry* cmdreg);
    virtual std::string getCommandName();
    virtual std::string getDescription();
    virtual void executeCommand(std::string args);
};

#endif