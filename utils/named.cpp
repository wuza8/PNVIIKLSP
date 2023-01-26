#include "utils/named.h"

void Named::setName(std::string name){
    this->name = name;
}

std::string Named::getName(){
    return this->name;
}