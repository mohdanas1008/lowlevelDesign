#pragma once
#include <iostream>

class DriveStrategy {
public:
    virtual void drive() = 0;
    virtual ~DriveStrategy() {};
};
