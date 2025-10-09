#pragma once
#include <string>
#include "IBuilder.hpp"
#include "computer.hpp"
class OfficePCBuilder : public IBuilder
{
    void buildCPU();
    void buildGPU();
    void buildRAM();
    void buildStorage();
};