#pragma once

#include "vehicle.hpp"
#include "parkingSlotInterface.hpp"
#include <random>

class TwoVehilerParkingSlot : public parkingSlotInterface
{
    Vehicle *vehicleObj = nullptr;
    bool isEmpty;
    string slotId;
    VEHICLE_TYPE slotType;

    string getSlotId()
    {
        std::random_device rd;                        // Non-deterministic random seed (hardware-based if available)
        std::mt19937 gen(rd());                       // Mersenne Twister engine
        std::uniform_int_distribution<> dist(1, 100); // Range: [1, 100]

        int randomNum = dist(gen);

        return "Slot_" + to_string(randomNum);
    }

public:
    TwoVehilerParkingSlot() : vehicleObj(nullptr), isEmpty(true), slotId(getSlotId()), slotType(VEHICLE_TYPE::TwoVehiler) {};
    void parkVehicle(Vehicle *Obj);
    void removeVehicle();
    void price();
    ~TwoVehilerParkingSlot() {}
};
