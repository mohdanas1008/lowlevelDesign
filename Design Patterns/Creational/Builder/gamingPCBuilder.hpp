#pragma once
#include <string>
#include "IBuilder.hpp"
#include "computer.hpp"
class GamingPCBuilder : public IBuilder
{
    void buildCPU();
    void buildGPU();
    void buildRAM();
    void buildStorage();
};