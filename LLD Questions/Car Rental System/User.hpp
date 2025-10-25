#pragma once
#include<string>
using namespace std;

class User
{
private:

    string userName;
    string drivingLicence;
public:
    User(string name, string dL);
    string getUserName();
    string getDrivingLicence();
    void setUserName(string name);
    void setDrivingLicence(string licence);
    ~User(){};
};
