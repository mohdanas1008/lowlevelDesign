#pragma once

#include "vehicle.hpp"

class parkingSlotInterface
{
    Vehicle* vehicleObj=nullptr;
    bool isEmpty;
    string slotId;
    VEHICLE_TYPE slotType;

public:
    virtual void parkVehicle(Vehicle* Obj)=0;
    virtual void removeVehicle()=0;
    virtual void price()=0;
    virtual ~parkingSlotInterface(){}
};
