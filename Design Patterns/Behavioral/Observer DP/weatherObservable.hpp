#pragma once

#include "observer.hpp"
class IWeatherObservable{
    public:

    virtual void add(IObserver *observer)=0;
    virtual void remove(IObserver *observer)=0;
    virtual void notify()=0;
    virtual void setWeatherDetails(float temp)=0;
    virtual float getWeatherDetails()=0;
    virtual ~IWeatherObservable(){};
};