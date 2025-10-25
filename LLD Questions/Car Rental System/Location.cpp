#include "Location.hpp"

Location::Location(int pCode, string city, string state, string country, string add) 
    : pincode(pCode), city(city), state(state), country(country), address(add) {};

string Location::getCity()
{
    return city;
}