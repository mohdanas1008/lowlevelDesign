#pragma once
#include"Store.hpp"
#include"User.hpp"


class VehicleReservationSystem
{
private:
    vector<Store*>storesList;
    vector<User*> userslist;    
public:
    VehicleReservationSystem(vector<Store*>storeList,vector<User*> userlist);
    Store* getStore(string storeId);
    ~VehicleReservationSystem(){};
};

