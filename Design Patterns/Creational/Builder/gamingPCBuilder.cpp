
#include "gamingPCBuilder.hpp"

void GamingPCBuilder::buildCPU()
{
    computer->setCPU("Intel Core i9-13900K");
}
void GamingPCBuilder::buildGPU()
{
    computer->setGPU("NVIDIA GeForce RTX 4090");
}
void GamingPCBuilder::buildRAM()
{
    computer->setRAM("64GB DDR5");
}
void GamingPCBuilder::buildStorage()
{
    computer->setStorage("2TB NVMe SSD");
}