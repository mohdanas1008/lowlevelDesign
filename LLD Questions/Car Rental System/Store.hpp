#pragma once
#include "vehicle.hpp"
#include "VehicleInventory.hpp"
#include "Location.hpp"
#include "Bill.hpp"
#include "Reservation.hpp"

class Store
{
    VehicleInventory *inventoryObj;
    Location *location;
    string storeId;
    vector<Reservation*> reservationList;
    vector<Bill*> BillsList;

public:
    Store(string id, vector<Vehicle *> vehicleList, Location *location);
    VehicleInventory *getInventory(vector<Vehicle *> vehicleList);
    string getStoreId();
    void getVehicleList();
    void createReservation(Vehicle *vehicle, User *user);
    void getAllReservations();
    Vehicle* getVehicle(int vehicleId);
    void generateBill(Reservation* res);

};