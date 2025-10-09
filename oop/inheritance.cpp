#include <bits/stdc++.h>
using namespace std;

class Vehicle
{
public:
    string brand;
    string model;
    double average;
    double cost;
    string type;

    Vehicle(string b, string m, double a, double c, string t) : brand(b), model(m), average(a), cost(c), type(t) {}

    void honk()
    {
        cout << "Tuut, tuut! ----$$%##__** \n";
    }

    void accelerate()
    {
        cout << "The "<<type<< "is accelerating.\n";
    }
    void displayFeatures()
    {
        cout<<"------Vehicle Features:-----\n";
    }
};

class Car : public Vehicle
{

public:
    int airbagCount;

    Car(string b, string m, double a, double c, string t, int ac) : airbagCount(ac), Vehicle(b, m, a, c, t) {}

    void displayFeatures()
    {
        cout<<"Car Features:\n";
        cout << "\tBrand: " << brand << "\n";
        cout << "\tModel: " << model << "\n";
        cout << "\tAverage: " << average << " km/l\n";
        cout << "\tCost: $" << cost << "\n";
        cout << "\tType: " << type << "\n";
        cout << "\tAirbag Count: " << airbagCount << "\n";
    }
};

class Bike : public Vehicle
{

public:

    Bike(string b, string m, double a, double c, string t) : Vehicle(b, m, a, c, t) {}

    void displayFeatures()
    {
        cout<<"Bike Features:\n";
        cout << "\tBrand: " << brand << "\n";
        cout << "\tModel: " << model << "\n";
        cout << "\tAverage: " << average << " km/l\n";
        cout << "\tCost: $" << cost << "\n";
        cout << "\tType: " << type << "\n";
    }
};

int main()
{
    Car car1("Toyota", "Camry", 28.0, 24000, "Sedan", 6);
    Bike bike1("Yamaha", "YZF-R3", 30.0, 5000, "Sport");

    car1.displayFeatures();
    car1.honk(); // inherited method
    bike1.displayFeatures();
    bike1.honk(); // inherited method
    car1.accelerate(); // inherited method
    bike1.accelerate(); // inherited method
    return 0;
}