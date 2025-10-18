#pragma once

#include <bits/stdc++.h>
#include "weatherObservable.hpp"
#include "observer.hpp"

using namespace std;

class WeatherStation: public IWeatherObservable{
    vector<IObserver*>observersList;
    float temperature;

    public:

    WeatherStation(){
        temperature=0.0;
    }
    void add(IObserver *observer);
    void remove(IObserver *observer);
    void notify();
    void setWeatherDetails(float temp);
    float getWeatherDetails();

};