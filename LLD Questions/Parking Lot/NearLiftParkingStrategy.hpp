#pragma once
#include "ParkingStrategy.hpp"

class NearLifParkingStrategy:public ParkingStrategy
{
private:
    
public:
    int findParkingSpace();
};