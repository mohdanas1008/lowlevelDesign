#pragma once
#include<bits/stdc++.h>
using namespace std;

class IBasePizza{
    public:
        virtual float getCost()=0;
        virtual string getDescription()=0;
        virtual ~IBasePizza(){};
};
