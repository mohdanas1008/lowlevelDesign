#pragma once

#include <bits/stdc++.h>
using namespace std;
class Computer{
    string CPU;
    string GPU;
    string RAM;
    string storage;

    public:
    void setCPU(const string& cpu);
    void setGPU(const string& gpu);
    void setRAM(const string& ram);
    void setStorage(const string& s);
    void showSpecs();
};