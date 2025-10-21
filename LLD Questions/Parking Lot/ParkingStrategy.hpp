#pragma once
#include<bits/stdc++.h>
using namespace std;

class ParkingStrategy
{
private:
    
public:
    // ParkingStrategy(/* args */);
    virtual int findParkingSpace()=0;
    virtual ~ParkingStrategy(){};
};