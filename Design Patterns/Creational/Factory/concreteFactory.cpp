#include <bits/stdc++.h>
using namespace std;

class Vehicle
{
public:
    virtual void drive() = 0;
    virtual ~Vehicle() {}
};

class Car : public Vehicle
{
public:
    void drive()
    {
        cout << "Driving a car" << endl;
    }
};

class Bike : public Vehicle
{
public:
    void drive()
    {
        cout << "Riding a bike" << endl;
    }
};

enum VehicleType
{
    CAR,
    BIKE
};

class IVehicleFactory
{
public:
    virtual Vehicle *createVehicle() = 0;
    static IVehicleFactory *getVehicle(VehicleType type);
    virtual ~IVehicleFactory() {}
};

class CarFactory : public IVehicleFactory
{
public:
    Vehicle *createVehicle()
    {
        return new Car();
    }
};

class BikeFactory : public IVehicleFactory
{
public:
    Vehicle *createVehicle()
    {
        return new Bike();
    }
};

IVehicleFactory* IVehicleFactory::getVehicle(VehicleType type)
{
    if (type == VehicleType::CAR)
    {
        return new CarFactory();
    }
    else if (type == VehicleType::BIKE)
    {
        return new BikeFactory();
    }
    else
    {
        return nullptr;
    }
}

int main()
{
    cout << "Factory Pattern" << endl;

    // Create a car
    IVehicleFactory *factory1= IVehicleFactory::getVehicle(VehicleType::CAR);
    Vehicle *vehicle1 = factory1->createVehicle();
    vehicle1->drive();

    IVehicleFactory *factory = IVehicleFactory::getVehicle(VehicleType::BIKE);
    Vehicle *vehicle = factory->createVehicle();
    vehicle->drive();

    delete vehicle;
    delete factory;
    delete vehicle1;
    delete factory1;
    return 0;
}