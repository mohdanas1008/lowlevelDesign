#pragma once

#include <bits/stdc++.h>
#include "BasePizza.hpp"
using namespace std;

class PanPizza: public IBasePizza{
    public:
        float getCost();
        string getDescription();
};