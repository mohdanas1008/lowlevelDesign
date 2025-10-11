#pragma once

#include <bits/stdc++.h>
#include "BasePizza.hpp"
#include "ToppingDecorator.hpp"

using namespace std;

class PannerToppingDecorator : public ToppingDecorator{
    public:
        PannerToppingDecorator(IBasePizza *baseObj);
        string getDescription();
        float getCost();
};