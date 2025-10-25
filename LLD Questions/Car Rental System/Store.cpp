#include "Store.hpp"

VehicleInventory *Store::getInventory(vector<Vehicle *> vehicleList)
{
    // if (inventoryObj == nullptr)
    // {
    //     return new VehicleInventory(vehicleList);
    // }
    return inventoryObj;
}

Store::Store(string id, vector<Vehicle *> vehicleList, Location *loc) : storeId(id), location(loc)
{
    inventoryObj = new VehicleInventory(vehicleList);
}

string Store::getStoreId() { return storeId; }

void Store::createReservation(Vehicle *vehicle, User *user)
{
    Reservation* res= new Reservation(vehicle, user, reservationList.size()+1, location);
    reservationList.push_back(res);
    generateBill(res);
}

void Store::generateBill(Reservation* res)
{
    Bill* bookingBill= new Bill(res);
    BillsList.push_back(bookingBill);
}

// vector<Vehicle *> Store::getVehicleList(){
void Store::getVehicleList()
{
    cout << "Getting vehicles List...." << endl;
    vector<Vehicle *> vehicles = inventoryObj->getVehicleList();
    for (auto vehicle : vehicles)
    {
        cout << vehicle->getVehicleNumber() << endl;
    }
}

Vehicle *Store::getVehicle(int vehicleId)
{
    cout << "Getting vehicle...." << endl;
    vector<Vehicle *> vehicles = inventoryObj->getVehicleList();
    for (auto vehicle : vehicles)
    {
        if (vehicle->getVehicleID() == vehicleId)
        {
            return vehicle;
        }
    }
    return nullptr;
}

void Store::getAllReservations()
{
    cout << "Getting Reservation List...." << endl;
    for (Reservation *reservation : reservationList)
    {
        cout<< reservation->getReservationDetails() << endl;
    }
}