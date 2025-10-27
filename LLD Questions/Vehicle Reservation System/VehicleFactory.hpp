#pragma once

#include"Vehicle.hpp"

class VehicleFactory
{
public:
    ~VehicleFactory();
    static Vehicle* getVehicle(VehicleType vehicleType,int vehicleNumber,int vehicleId);
};