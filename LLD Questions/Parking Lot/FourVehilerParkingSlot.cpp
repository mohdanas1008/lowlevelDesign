#include "FourVehilerParkingSlot.hpp"


void FourVehilerParkingSlot::parkVehicle(Vehicle* obj){
    vehicleObj=obj;
    isEmpty=false;
    cout<<"parking a Four vehiler";
}

void FourVehilerParkingSlot::removeVehicle(){
    vehicleObj=nullptr;
    isEmpty=true;
    cout<<"Four vehiler removed from 4 vehiler Parking slot";
}

void FourVehilerParkingSlot::price(){
    cout<<"price is 40";
} 