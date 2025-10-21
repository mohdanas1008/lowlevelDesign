#include "twoVehilerParkingSlot.hpp"


void TwoVehilerParkingSlot::parkVehicle(Vehicle *Obj){
    cout<<"parking a two vehiler"<<endl;
    vehicleObj=Obj;
    isEmpty=false;
}

void TwoVehilerParkingSlot::removeVehicle(){
    vehicleObj=nullptr;
    isEmpty=true;
    cout<<"Two vehiler removed from 2 vehiler Parking slot";
}

void TwoVehilerParkingSlot::price(){
    cout<<"price is 20";
} 