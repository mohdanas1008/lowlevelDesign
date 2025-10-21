#include<bits/stdc++.h>

#include"EnteranceGate.hpp"
#include"vehicle.hpp"
#include "Utility.hpp"
using namespace std;

int main(){

    // adding slots;
    Utility::getsomestock();


    EnteranceGate Gate1;
    Vehicle* car1 = new Vehicle("xyz01cb20",VEHICLE_TYPE::TwoVehiler);
    int availableSlotIdx= Gate1.findParkingSlot(car1->getVehicleType());
    Gate1.bookParkingSlot(car1,availableSlotIdx);

}