#include "User.hpp"

User::User(string name, string licence) : userName(name), drivingLicence(licence) {}
string User::getUserName() { return userName; }
string User::getDrivingLicence() { return drivingLicence; }
void User::setUserName(string name)
{
    this->userName = name;
}
void User::setDrivingLicence(string licence)
{
    this->drivingLicence = licence;
}