#pragma once

#include <bits/stdc++.h>
#include "BasePizza.hpp"
using namespace std;

class HandTossedPizza: public IBasePizza{
    public:
        float getCost();
        string getDescription();
};