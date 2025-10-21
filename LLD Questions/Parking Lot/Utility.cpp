#include "Utility.hpp"

// Define static members
ParkingManager* Utility::fourvehilerManager = nullptr;
ParkingManager* Utility::TwovehilerManager = nullptr;

void Utility::getsomestock() {
    fourvehilerManager = ParkingManagerFactory::getParkingManager(VEHICLE_TYPE::FourVehiler);
    TwovehilerManager  = ParkingManagerFactory::getParkingManager(VEHICLE_TYPE::TwoVehiler);

    fourvehilerManager->addParkingSlots(VEHICLE_TYPE::FourVehiler, 10);
    TwovehilerManager->addParkingSlots(VEHICLE_TYPE::TwoVehiler, 10);
}
