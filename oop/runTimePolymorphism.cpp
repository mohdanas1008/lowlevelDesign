#include <bits/stdc++.h>
using namespace std;

// run time polymorphism ~ method overriding
class Payment
{  
    public:
    virtual void makePayment(double amount){
        cout<<"a Generic payment of "<<amount<<" is made"<<endl;
    } 
};

class CreditCardPayment: public Payment{
    public:
    void makePayment(double amount) {
        cout<<"             a Credit Card payment of "<<amount<<" is made"<<endl;
    } 
};

class DebitCardPayment: public Payment{
    public:
    void makePayment(double amount) {
        cout<<"             a Debit Card payment of "<<amount<<" is made!"<<endl;
    } 
};

class UpiPayment: public Payment{
    public:
    void makePayment(double amount) {
        cout<<"            Recieved "<<amount<<" Rs Via UPI!"<<endl;
    } 
};

class cryptoPayment: public Payment{
    public:
    void makePayment(double amount) {
        cout<<"           Recieved "<<amount<<" Rs Crypto wallet!"<<endl;
    } 
};

int main()
{
    cout<<"----Run Time Polymorphism----"<<endl;
    Payment *creditCardPay= new CreditCardPayment();
    Payment *debitCardPay= new DebitCardPayment();
    Payment *upiPay= new UpiPayment();
    Payment *cryptoPay= new cryptoPayment();

    cout<<"Making Payment of 50000 ::"<<endl;
    creditCardPay->makePayment(50000);

    cout<<"Making Payment of 1500 ::"<<endl;
    debitCardPay->makePayment(1500);

    cout<<"Making Payment of 120 :: "<<endl;
    upiPay->makePayment(120);

    cout<<"Making Payment of 250000 ::"<<endl;
    cryptoPay->makePayment(250000);
    return 0;
}   