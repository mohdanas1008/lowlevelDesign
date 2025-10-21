#include "fourVehilerParkingManager.hpp"

void FourVehilerParkingManager::addParkingSlots(VEHICLE_TYPE slotType, int numberOfSlots)
{
    cout << "adding parking slots for four vehiler" << endl;
    for (int i = 0; i < numberOfSlots; i++)
    {
        parkingSlotsMap[slotType].push_back(new FourVehilerParkingSlot());
    }
}

void FourVehilerParkingManager::removeParkingSlots(VEHICLE_TYPE slotType, int numberOfSlots)
{
    cout << "Removing parking slots for four vehiler" << endl;
    for (int i = 0; i < numberOfSlots; i++)
    {
        parkingSlotsMap[slotType].pop_back();
    }
}

int FourVehilerParkingManager::findParkingSlot()
{
    int slotIdx=parkingStartegy->findParkingSpace();
    cout << "find parking spot 4 vehiler" << endl;
    cout<<"find slotIdx:"<<slotIdx<<" !"<<endl;
    return slotIdx; // just for trial purpose
}
void FourVehilerParkingManager::AllocateVehicle(Vehicle *obj, int slotIdx)
{
    parkingSlotsMap[VEHICLE_TYPE::FourVehiler][slotIdx]->parkVehicle(obj);
    cout << "allocate 4 vlr parking" << endl;
    cout << "4 vehiler slotIDX"<<slotIdx << endl;
}
void FourVehilerParkingManager::DeallocateVehicle() { cout << "dealocated 4 vlr parking" << endl; }
