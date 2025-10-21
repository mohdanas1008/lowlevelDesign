#pragma once

#include "vehicle.hpp"
#include "parkingSlotInterface.hpp"

class FourVehilerParkingSlot: public parkingSlotInterface
{
    Vehicle *vehicleObj=nullptr;
    bool isEmpty;
    string slotId;
    VEHICLE_TYPE slotType;

public:
    void parkVehicle(Vehicle* obj);
    void removeVehicle();
    void price();
    ~FourVehilerParkingSlot(){}
};
