#pragma once
#include"driveStrategy.hpp"

class Vehicle{
    DriveStrategy* driveStrategy;
    public:
    Vehicle(DriveStrategy* strategy);
    void drive();
    ~Vehicle(){};
};