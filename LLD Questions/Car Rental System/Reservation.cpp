#include "Reservation.hpp"

Reservation::Reservation(Vehicle *vehi, User *us, int resNum, Location *loc)
    : vehicle(vehi), user(us), reservationLocation(loc)
{
    cout << loc->getCity() << "'s New reservation underCreation..." << endl;
    status = ReservationStatus::SCHEDULED;
    reservaationId = "res_" + to_string(resNum);
}
string Reservation::getStatus(ReservationStatus status)
{
    switch (status)
    {
    case ReservationStatus::COMPLETED:
        return "Complete";
        break;
    case ReservationStatus::CANCELED:
        return "Canceled";
        break;
    case ReservationStatus::INPROCESS:
        return "Inprocess";
        break;
    case ReservationStatus::SCHEDULED:
        return "Scheduled";
        break;
    default:
        return "_";
        break;
    }
}
string Reservation::getReservationId()
{
    return reservaationId;
}

string Reservation::getReservationDetails()
{
    string usernm = user->getUserName();
    int vid = vehicle->getVehicleID();
    string res = usernm + " " + to_string(vid) + " with Id:" + reservaationId + " Status: " + getStatus(status);
    return res;
}