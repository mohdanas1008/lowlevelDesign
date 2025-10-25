#include "Car.hpp"

Car::Car(int vehicleNumber, int vehicleID) 
    : Vehicle(vehicleNumber, vehicleID, VehicleType::CAR, 5) {}