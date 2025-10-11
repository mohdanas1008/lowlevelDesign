#pragma once

#include <bits/stdc++.h>
#include "BasePizza.hpp"
#include "ToppingDecorator.hpp"

using namespace std;

class ChickenToppingDecorator : public ToppingDecorator{
    public:
        ChickenToppingDecorator(IBasePizza *baseObj);
        string getDescription();
        float getCost();
};