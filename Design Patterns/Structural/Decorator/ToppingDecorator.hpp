#pragma once

#include "BasePizza.hpp"

class ToppingDecorator: public IBasePizza{
    protected:
    IBasePizza *basePizza;

    public:
        ToppingDecorator(IBasePizza *baseObj);
        virtual ~ToppingDecorator(){};
};
