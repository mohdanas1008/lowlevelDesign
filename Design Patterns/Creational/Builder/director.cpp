#include "director.hpp"

void Director::setBuilder(IBuilder *b)
{
    builder = b;
}

Computer* Director::setComputer()
{
    builder->buildCPU();
    builder->buildGPU();
    builder->buildRAM();
    builder->buildStorage();
    return builder->getComputer();
};