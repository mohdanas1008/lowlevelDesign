#include <bits/stdc++.h>
#include "ToppingDecorator.hpp"
#include "ChickenToppingDecorator.hpp"

ChickenToppingDecorator::ChickenToppingDecorator(IBasePizza *baseObj) : ToppingDecorator(baseObj) {};

string ChickenToppingDecorator::getDescription()
{
    return basePizza->getDescription() + "+ With less Spicy Chicken on Top";
}

float ChickenToppingDecorator::getCost()
{
    return basePizza->getCost() + 150.0;
}
