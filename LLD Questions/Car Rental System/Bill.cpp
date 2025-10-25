#include "Bill.hpp"

Bill::Bill(Reservation* res):reservation(res){
    billId= "Bill_"+res->getReservationId();
}
void Bill::computeBillingAmout(){
    billingAmount= 200.00;
}