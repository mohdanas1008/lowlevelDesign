#include "VehicleReservationSystem.hpp"

VehicleReservationSystem::VehicleReservationSystem(vector<Store *> storeList, vector<User *> userlist) : 
    storesList(storeList), userslist(userlist) {}

Store *VehicleReservationSystem::getStore(string storeId)
{
    for (Store *store : storesList)
    {
        if (store->getStoreId() == storeId)
        {
            return store;
        }
    }
    return nullptr;
}
