#include "computer.hpp"
#include <iostream>
using namespace std;

void Computer::setCPU(const string &cpu)
{
    CPU = cpu;
}
void Computer::setGPU(const string &gpu)
{
    GPU = gpu;
}
void Computer::setRAM(const string &ram)
{
    RAM = ram;
}
void Computer::setStorage(const string &s)
{
    storage = s;
}

void Computer::showSpecs()
{
    cout << "|   CPU: " << CPU <<"\t|"<< endl;
    cout << "|   GPU: " << GPU <<"\t|"<< endl;
    cout << "|   RAM: " << RAM <<"\t\t|"<< endl;
    cout << "|   Storage: " << storage <<"\t|"<< endl;
}