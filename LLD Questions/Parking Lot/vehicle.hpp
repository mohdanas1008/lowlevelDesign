#pragma once
#include<bits/stdc++.h>
using namespace std;

enum VEHICLE_TYPE
{
    TwoVehiler,
    FourVehiler
};

class Vehicle
{
    string vehicleNumber;
    VEHICLE_TYPE vehicleType;

public:
    Vehicle(string vehNum, VEHICLE_TYPE type) : vehicleNumber(vehNum), vehicleType(type) {}
    string getVehicleNumber() const
    {
        return vehicleNumber;
    }

    VEHICLE_TYPE getVehicleType() const
    {
        return vehicleType;
    }
};