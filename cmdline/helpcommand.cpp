#include "cmdline/helpcommand.h"

std::string HelpCommand::getCommandName(){
    return "help";
}

std::string HelpCommand::getDescription(){
    return "pokazuje tę listę";
}

HelpCommand::HelpCommand(CommandRegistry * cmdreg){
    this->cmdreg = cmdreg;
}

void HelpCommand::executeCommand(std::string args){
    std::cout<<"Lista komend:"<<std::endl;

    for(CommandHandler* handler : *cmdreg->getCommandHandlers()){
        std::cout<< handler->getCommandName() <<": "<<handler->getDescription() <<std::endl;
    }

}