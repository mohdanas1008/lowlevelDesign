#include "ParkingManagerFactory.hpp"

ParkingManager *ParkingManagerFactory::getParkingManager(VEHICLE_TYPE vehicleType)
{
    switch (vehicleType)
    {
    case VEHICLE_TYPE::TwoVehiler:
        return new TwoVehilerParkingManager(new NearEntryParkingStrategy());

    case VEHICLE_TYPE::FourVehiler:
        return new FourVehilerParkingManager(new NearLifParkingStrategy());
    default:
        return new TwoVehilerParkingManager(new NearEntryParkingStrategy()); // default 2 vehiler manager
    }
}
