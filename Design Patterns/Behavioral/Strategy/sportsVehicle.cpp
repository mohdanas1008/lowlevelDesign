#include"sportsVehicle.hpp"
#include"sportsDriveStrategy.hpp"

SportsVehicle::SportsVehicle() : Vehicle(new SportsDriveStrategy()) {}