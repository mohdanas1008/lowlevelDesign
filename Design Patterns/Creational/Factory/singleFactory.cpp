#include<bits/stdc++.h>
using namespace std;

class Vehicle{
    public:
    virtual void drive()=0;
};

class Car: public Vehicle{
    public:
    void drive(){
        cout<<"Driving a car"<<endl;
    }
};

class Bike: public Vehicle{
    public:
    void drive(){
        cout<<"Riding a bike"<<endl;
    }
};

enum VehicleType{
    CAR,
    BIKE
};

class VehicleFactory{
    public:
    static Vehicle* getVehicle(VehicleType type){
        if(type==VehicleType::CAR){
            return new Car();
        }
        else if(type==VehicleType::BIKE){
            return new Bike();
        }
        else{
            return nullptr;
        }
    }
};


int main(){
    cout<<"Factory Pattern"<<endl;

    Vehicle* v1 = VehicleFactory::getVehicle(VehicleType::CAR);
    v1->drive();

    Vehicle* v2 = VehicleFactory::getVehicle(VehicleType::BIKE);
    v2->drive();
    return 0;
}