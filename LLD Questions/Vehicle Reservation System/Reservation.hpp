#pragma once
#include "Vehicle.hpp"
#include "User.hpp"
#include "Location.hpp"

class Reservation
{
private:
    string reservaationId;
    Vehicle *vehicle;
    User *user;
    Date reservationStartDttm;
    Date reservationEndDttm;
    ReservationStatus status;
    Location* reservationLocation;

public:
    Reservation(Vehicle* vehicle, User* user,int resNum, Location* location);
    string getReservationDetails();
    string getReservationId();
    string getStatus(ReservationStatus status);
    ~Reservation();
};