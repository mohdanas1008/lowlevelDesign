#pragma once
#include <string>
#include "computer.hpp"
class IBuilder
{
protected:
    Computer *computer;

public:
    IBuilder() { computer = new Computer(); }
    virtual void buildCPU() = 0;
    virtual void buildGPU() = 0;
    virtual void buildRAM() = 0;
    virtual void buildStorage() = 0;
    virtual Computer* getComputer()
    {
        return computer;
    }
    virtual ~IBuilder() {}
};