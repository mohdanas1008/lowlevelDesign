#pragma once
#include <string>
using namespace std;

class Location
{
    string address;
    int pincode;
    string city;
    string state;
    string country;

public:
    Location(int pincode, string city, string state, string country, string add);
    string getCity();
};
