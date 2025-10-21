#pragma once

#include "parkingSlotInterface.hpp"
#include "ParkingStrategy.hpp"

class ParkingManager
{
    protected:

    map<VEHICLE_TYPE, vector<parkingSlotInterface*>> parkingSlotsMap;
    ParkingStrategy *parkingStartegy;

public:
    ParkingManager(ParkingStrategy *strategy): parkingStartegy(strategy){};
    virtual void addParkingSlots(VEHICLE_TYPE slotType, int numberOfSlots) = 0;
    virtual void removeParkingSlots(VEHICLE_TYPE slotType, int numberOfSlots) = 0;
    virtual int findParkingSlot() = 0;
    virtual void AllocateVehicle(Vehicle* obj,int slotIdx)=0;
    virtual void DeallocateVehicle()=0;
};