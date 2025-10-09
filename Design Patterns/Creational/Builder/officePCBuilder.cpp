
#include "officePCBuilder.hpp"

void OfficePCBuilder::buildCPU()
{
    computer->setCPU("Intel Core i5-13400");
}
void OfficePCBuilder::buildGPU()
{
    computer->setGPU("NVIDIA RTX 3000");
}
void OfficePCBuilder::buildRAM()
{
    computer->setRAM("32GB DDR5");
}
void OfficePCBuilder::buildStorage()
{
    computer->setStorage("1TB NVMe SSD");
}