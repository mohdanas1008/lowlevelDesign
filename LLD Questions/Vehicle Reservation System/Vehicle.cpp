#include "Vehicle.hpp"

Vehicle::Vehicle(int vehicleNumber, int vehicleID, VehicleType type, int seats)
    : vehicleNumber(vehicleNumber), vehicleID(vehicleID), vehicleType(type), noOfSeat(seats) {}

int Vehicle::getVehicleID() const {
    return vehicleID;
}

int Vehicle::getVehicleNumber() const {
    return vehicleNumber;
}

VehicleType Vehicle::getVehicleType() const {
    return vehicleType;
}

string Vehicle::getCompanyName() const {
    return companyName;
}

string Vehicle::getModelName() const {
    return modelName;
}

int Vehicle::getKmDriven() const {
    return kmDriven;
}

Date Vehicle::getManufacturingDate() const {
    return manufacturingDate;
}

int Vehicle::getAverage() const {
    return average;
}

int Vehicle::getCc() const {
    return cc;
}

int Vehicle::getDailyRentalCost() const {
    return dailyRentalCost;
}

int Vehicle::getHourlyRentalCost() const {
    return hourlyRentalCost;
}

int Vehicle::getNoOfSeat() const {
    return noOfSeat;
}

Status Vehicle::getStatus() const {
    return status;
}

void Vehicle::setVehicleID(int vehicleID) {
    this->vehicleID = vehicleID;
}

void Vehicle::setVehicleNumber(const int &vehicleNumber) {
    this->vehicleNumber = vehicleNumber;
}

void Vehicle::setVehicleType(VehicleType vehicleType) {
    this->vehicleType = vehicleType;
}

void Vehicle::setCompanyName(const string &companyName) {
    this->companyName = companyName;
}

void Vehicle::setModelName(const string &modelName) {
    this->modelName = modelName;
}

void Vehicle::setKmDriven(int kmDriven) {
    this->kmDriven = kmDriven;
}

void Vehicle::setManufacturingDate(const Date &manufacturingDate) {
    this->manufacturingDate = manufacturingDate;
}

void Vehicle::setAverage(int average) {
    this->average = average;
}

void Vehicle::setCc(int cc) {
    this->cc = cc;
}

void Vehicle::setDailyRentalCost(int dailyRentalCost) {
    this->dailyRentalCost = dailyRentalCost;
}

void Vehicle::setHourlyRentalCost(int hourlyRentalCost) {
    this->hourlyRentalCost = hourlyRentalCost;
}

void Vehicle::setNoOfSeat(int noOfSeat) {
    this->noOfSeat = noOfSeat;
}

void Vehicle::setStatus(Status status) {
    this->status = status;
}
