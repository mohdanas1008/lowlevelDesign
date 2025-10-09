#include"vehicle.hpp"

Vehicle::Vehicle(DriveStrategy* strategy) : driveStrategy(strategy) {
}

void Vehicle::drive() {
    driveStrategy->drive();
}