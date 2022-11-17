#include "cmdline/cmdregistry.h"

void CommandRegistry::registerCommandHandler(CommandHandler* handler){
    commandHandlers.push_back(handler);
}

void CommandRegistry::executeCommand(std::string command){
    std::stringstream ss(command);
    std::string comm;
    ss>>comm;

    for(CommandHandler * handler : commandHandlers){
        if(handler->getCommandName() == comm){
            handler->executeCommand(command);
            return;
        }
    }

    std::cout<<"Komenda o nazwie \""<<comm<<"\" nie istnieje!"<<std::endl;
}

std::vector<CommandHandler*>* CommandRegistry::getCommandHandlers(){
    return &commandHandlers;
}