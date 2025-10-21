#pragma once

#include "parkingSlotInterface.hpp"
#include "parkingManger.hpp"
#include "FourVehilerParkingSlot.hpp"

class FourVehilerParkingManager:public ParkingManager 
{
public:
        FourVehilerParkingManager(ParkingStrategy *parkStrategy):ParkingManager(parkStrategy){};
    void addParkingSlots(VEHICLE_TYPE slotType, int numberOfSlots);
    void removeParkingSlots(VEHICLE_TYPE slotType, int numberOfSlots);
    int findParkingSlot();
    void AllocateVehicle(Vehicle* obj,int slotIdx);
    void DeallocateVehicle();
};