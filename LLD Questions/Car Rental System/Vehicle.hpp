#pragma once
#include <bits/stdc++.h>
#include "Utils.hpp"

using namespace std;

class Vehicle
{
    int vehicleNumber;
    int vehicleID;
    VehicleType vehicleType;
    string companyName;
    string modelName;
    int kmDriven;
    Date manufacturingDate;
    int average;
    int cc;
    int dailyRentalCost;
    int hourlyRentalCost;
    int noOfSeat;
    Status status;

public:
    Vehicle(int vehicleNumber, int vehicleID, VehicleType type, int noOfSeat);
    
    // Getters
    int getVehicleNumber() const;
    int getVehicleID() const;
    VehicleType getVehicleType() const;
    string getCompanyName() const;
    string getModelName() const;
    int getKmDriven() const;
    Date getManufacturingDate() const;
    int getAverage() const;
    int getCc() const;
    int getDailyRentalCost() const;
    int getHourlyRentalCost() const;
    int getNoOfSeat() const;
    Status getStatus() const;
    
    // Setters
    void setVehicleNumber(const int &vehicleNumber);
    void setVehicleID(int vehicleID);
    void setVehicleType(VehicleType vehicleType);
    void setCompanyName(const string &companyName);
    void setModelName(const string &modelName);
    void setKmDriven(int kmDriven);
    void setManufacturingDate(const Date &manufacturingDate);
    void setAverage(int average);
    void setCc(int cc);
    void setDailyRentalCost(int dailyRentalCost);
    void setHourlyRentalCost(int hourlyRentalCost);
    void setNoOfSeat(int noOfSeat);
    void setStatus(Status status);
    
    
    virtual ~Vehicle(){};
};