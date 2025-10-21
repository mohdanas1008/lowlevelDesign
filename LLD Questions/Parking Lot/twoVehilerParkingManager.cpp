#include "twoVehilerParkingManager.hpp"

void TwoVehilerParkingManager::addParkingSlots(VEHICLE_TYPE slotType, int numberOfSlots)
{
    cout << "adding parking slots for two vehiler" << endl;
    for (int i = 0; i < numberOfSlots; i++)
    {
        parkingSlotsMap[slotType].push_back(new TwoVehilerParkingSlot());
    }
}

void TwoVehilerParkingManager::removeParkingSlots(VEHICLE_TYPE slotType, int numberOfSlots)
{
    cout << "Removing parking slots for two vehiler" << endl;
    for (int i = 0; i < numberOfSlots; i++)
    {
        parkingSlotsMap[slotType].pop_back();
    }
}

int TwoVehilerParkingManager::findParkingSlot()
{
    // get the 2 vehiler ps's. get the size check the 1st one available with isEmpty true.
    // return that ps_id or better index.
    int slotIdx=parkingStartegy->findParkingSpace();
    cout << "find parking spot 2 vehiler" << endl;
    return slotIdx; // just for testing purpose..
}

void TwoVehilerParkingManager::AllocateVehicle(Vehicle *obj,int slotIdx) {
     if (slotIdx >= parkingSlotsMap[VEHICLE_TYPE::TwoVehiler].size()) {
        cout<<parkingSlotsMap[VEHICLE_TYPE::TwoVehiler].size()<<endl;
        cout<<parkingSlotsMap[VEHICLE_TYPE::FourVehiler].size()<<endl;
        cout << "Error: Invalid slot index " << slotIdx << endl;
        return;
    }

    if (parkingSlotsMap[VEHICLE_TYPE::TwoVehiler][slotIdx] == nullptr) {
        cout << "Error: Slot pointer is null at index " << slotIdx << endl;
        return;
    }
    parkingSlotsMap[VEHICLE_TYPE::TwoVehiler][slotIdx]->parkVehicle(obj);
    cout << "allocate 2 vehiler parking" << endl;
    cout << "2 vehiler slotIDX "<<slotIdx << endl;
}
void TwoVehilerParkingManager::DeallocateVehicle() { cout << "dealocated 2 vlr parking" << endl; }
