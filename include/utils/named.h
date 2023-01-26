#include <string>

#ifndef NAMED_H
#define NAMED_H

class Named{
    std::string name;

public:
    void setName(std::string name);
    std::string getName();

};


#endif