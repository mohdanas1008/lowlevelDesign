#pragma once
#include "parkingManger.hpp"
#include "twoVehilerParkingManager.hpp"
#include "fourVehilerParkingManager.hpp"
#include "NearEntryParkingStrategy.hpp"
#include "NearLiftParkingStrategy.hpp"


class ParkingManagerFactory{
    public:

    static ParkingManager* getParkingManager(VEHICLE_TYPE vehicleType);
};