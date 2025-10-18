#pragma once

#include<bits/stdc++.h>
#include "observer.hpp"
#include "weatherObservable.hpp"
using namespace std;

class TvDisplayObserver:public IObserver{
    IWeatherObservable *weatherObserver;
    public:
    TvDisplayObserver(IWeatherObservable *observable);
    void update();
};