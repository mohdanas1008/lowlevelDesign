#include "EnteranceGate.hpp"
#include "Utility.hpp"

// ParkingManager *getParkingManager(VEHICLE_TYPE type)
// {
//     return (type == VEHICLE_TYPE::FourVehiler)
//                ? Utility::fourvehilerManager
//                : Utility::TwovehilerManager;
// }

int EnteranceGate::findParkingSlot(VEHICLE_TYPE type)
{
    parkingManager = (type == VEHICLE_TYPE::FourVehiler)
                         ? Utility::fourvehilerManager
                         : Utility::TwovehilerManager;
    return parkingManager->findParkingSlot();
}

void EnteranceGate::bookParkingSlot(Vehicle *vehicleObj, int slotIdx)
{
    parkingManager->AllocateVehicle(vehicleObj, slotIdx);
}

void EnteranceGate::generateTicket()
{
    cout << "Generating Ticker" << endl;
}