#include<bits/stdc++.h>
#include"vehicle.hpp"
#include"sportsVehicle.hpp"
#include"goodsVehicle.hpp"

using namespace std;


int main(){
    // creating a sports vehicle
    cout<<"creating a sports vehicle with sports drive stragety"<<endl;
    Vehicle* vehicle;
    vehicle= new SportsVehicle();
    vehicle->drive();

    // creating a goods vehicle with normal drive stragety
    cout<<"creating a goods vehicle with normal drive stragety"<<endl;
    Vehicle* vehicle1;
    vehicle1= new GoodsVehicle();
    vehicle1->drive();
    
}