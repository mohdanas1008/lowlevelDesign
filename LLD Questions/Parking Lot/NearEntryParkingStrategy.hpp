#pragma once
#include "ParkingStrategy.hpp"

class NearEntryParkingStrategy:public ParkingStrategy
{
private:
    
public:
    int findParkingSpace();
};