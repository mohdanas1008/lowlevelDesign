#include <bits/stdc++.h>
using namespace std;

#include "VehicleReservationSystem.hpp"
#include "VehicleFactory.hpp"
#include "Store.hpp"

void initialize(vector<User *> &usersList, vector<Store *> &storeList)
{
    // creating users;
    User* user1= new User("Anas","DL_125_hld");
    User* user2= new User("Marcus","DL_192_kid");
    User* user3= new User("Sonny","PJ_020_hrd");
    usersList.push_back(user1);
    usersList.push_back(user2);
    usersList.push_back(user3);

    // creating bangalore Vehicles and store
    vector<Vehicle *> vehicleListBang;
    Vehicle* bmw= VehicleFactory::getVehicle(VehicleType::CAR,102,3145);
    Vehicle* oooo= VehicleFactory::getVehicle(VehicleType::CAR,103,3985);
    vehicleListBang.push_back(bmw);
    vehicleListBang.push_back(oooo);
    Location* bangLocation= new Location(560037, "Bangalore", "Karnataka", "India", "Marathahalli");
    Store* bangaloreStore= new Store("Bang_001",vehicleListBang,bangLocation);
    storeList.push_back(bangaloreStore);
    

    // creating delhi Vehicles and store
    vector<Vehicle *> vehicleListDelhi;
    Vehicle* harle= VehicleFactory::getVehicle(VehicleType::CAR,120,3652);
    Vehicle* apex= VehicleFactory::getVehicle(VehicleType::CAR,122,3256);
    vehicleListDelhi.push_back(harle);
    vehicleListDelhi.push_back(apex);
    Location* delLocation= new Location(260037, "Delhi", "Delhi", "India", "ncr");
    Store* delhiStore= new Store("Dli_011",vehicleListDelhi,delLocation);
    storeList.push_back(delhiStore);

}
int main()
{
    vector<User*> usersList;
    vector<Store *> storeList;
    initialize(usersList,storeList);
    cout << "Welcome to vehicle reservation system" << endl;
    VehicleReservationSystem *reservationSystem;
    reservationSystem= new VehicleReservationSystem(storeList,usersList);

    cout<<"Listing Bangalore Vehicles"<<endl;
    Store* bangaloreStore=reservationSystem->getStore("Bang_001");
    bangaloreStore->getVehicleList();
    Vehicle* chosenVehicleBang= bangaloreStore->getVehicle(3985);
    bangaloreStore->createReservation(chosenVehicleBang,usersList.at(0));
    bangaloreStore->getAllReservations();
    
    
    cout<<"Listing Delhi Vehicles"<<endl;
    Store* delhiStore=reservationSystem->getStore("Dli_011");
    delhiStore->getVehicleList();
    Vehicle* chosenVehicleDelhi= delhiStore->getVehicle(3256);
    delhiStore->createReservation(chosenVehicleDelhi,usersList.at(1));
    Vehicle* chosenVehicleDelhi1= delhiStore->getVehicle(3652);
    delhiStore->createReservation(chosenVehicleDelhi1,usersList.at(2));
    delhiStore->getAllReservations();
    return 0;
}