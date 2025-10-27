#pragma once
#include"Reservation.hpp"

class Bill
{
private:
    Reservation* reservation;
    string billId;
    double billingAmount;
public:
    Bill(Reservation* res);
    void computeBillingAmout(); // can include strategy pattern for this.
    ~Bill();
};
