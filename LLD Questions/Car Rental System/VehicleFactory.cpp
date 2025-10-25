#include "VehicleFactory.hpp"
#include "Car.hpp"

Vehicle* VehicleFactory::getVehicle(VehicleType vehicleType,int vehicleNumber, int vehicleID)
{
    switch (vehicleType)
    {
    case VehicleType::CAR :
        return new Car(vehicleNumber,vehicleID);
        break;
        
        default:
        return new Car(102,12);
        break;
    }
}