#pragma once

#include "vehicle.hpp"
#include "ticket.hpp"
#include "ParkingManagerFactory.hpp"

class EnteranceGate
{
    Vehicle* vehicleObj=nullptr;
    Ticket ticketObj;
    ParkingManager *parkingManager;

    public:
    EnteranceGate(){};
    // ParkingManager* getParkingManager();
    int findParkingSlot(VEHICLE_TYPE type );
    void bookParkingSlot(Vehicle* vehicleObj,int slotIdx);
    void generateTicket();
};