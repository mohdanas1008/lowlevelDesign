#pragma once

#include<bits/stdc++.h>
#include "observer.hpp"
#include "weatherObservable.hpp"
using namespace std;

class MobileDisplayObserver:public IObserver{
    IWeatherObservable *weatherObserver;
    public:
    MobileDisplayObserver(IWeatherObservable *observable);
    void update();
};