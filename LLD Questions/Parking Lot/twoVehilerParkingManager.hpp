#pragma once

#include "parkingSlotInterface.hpp"
#include "parkingManger.hpp"
#include "twoVehilerParkingSlot.hpp"

class TwoVehilerParkingManager:public ParkingManager 
{
    TwoVehilerParkingSlot *twoVehilerSpot;
public:
    TwoVehilerParkingManager(ParkingStrategy *parkStrategy):ParkingManager(parkStrategy){};
    void addParkingSlots(VEHICLE_TYPE slotType, int numberOfSlots);
    void removeParkingSlots(VEHICLE_TYPE slotType, int numberOfSlots);
    int findParkingSlot();
    void AllocateVehicle(Vehicle* obj,int slotIdx);
    void DeallocateVehicle();
};