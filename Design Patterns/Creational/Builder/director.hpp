#pragma once
#include <string>
#include "IBuilder.hpp"
#include "computer.hpp"

class Director{
    IBuilder* builder;
    public:
    void setBuilder(IBuilder* b);
    Computer* setComputer();
};