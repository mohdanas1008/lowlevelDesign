#include <bits/stdc++.h>
#include "ToppingDecorator.hpp"
#include "PannerToppingDecorator.hpp"

PannerToppingDecorator::PannerToppingDecorator(IBasePizza *baseObj) : ToppingDecorator(baseObj) {};

string PannerToppingDecorator::getDescription()
{
    return basePizza->getDescription() + "With Paneer Topping";
}

float PannerToppingDecorator::getCost()
{
    return basePizza->getCost() + 50.0;
}
