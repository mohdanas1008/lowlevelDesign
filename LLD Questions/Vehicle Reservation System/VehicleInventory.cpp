#include "VehicleInventory.hpp"

VehicleInventory::VehicleInventory(vector<Vehicle *> list) : vehicleList(list) {}

vector<Vehicle *> VehicleInventory::getVehicleList()
{
    return vehicleList;
}

void VehicleInventory::removeVehicleFromList(Vehicle *vehicleObj)
{
    for (auto it = vehicleList.begin(); it != vehicleList.end(); it++)
    {
        if ((*it)->getVehicleID() == vehicleObj->getVehicleID())
        {
            vehicleList.erase(it);
        }
    }
}

void VehicleInventory::updateList()
{
    cout << "updating the vehicle list" << endl;
}