#include "cmdline/inlinecommandhandler.h"

InlineCommandHandler::InlineCommandHandler(std::string name, std::string description, void (*commandFunction)(std::string)){
    this->commandFunction=commandFunction;
    commandName=name;
    this->commandDescription = description;
}

std::string InlineCommandHandler::getCommandName(){
    return commandName;
}

std::string InlineCommandHandler::getDescription(){
    return commandDescription;
}

void InlineCommandHandler::executeCommand(std::string args){
    this->commandFunction(args);
}