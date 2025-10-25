#pragma once
#include<bits/stdc++.h>
#include "Vehicle.hpp"


class VehicleInventory
{
private:
    vector<Vehicle*>vehicleList;
public:
    VehicleInventory(vector<Vehicle*>list);
    ~VehicleInventory();

    vector<Vehicle*> getVehicleList();
    void removeVehicleFromList(Vehicle* vehicleObj);
    void updateList();
};
