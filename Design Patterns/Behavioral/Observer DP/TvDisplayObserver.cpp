#include "TvDisplayObserver.hpp"

TvDisplayObserver::TvDisplayObserver(IWeatherObservable *observable) : weatherObserver(observable) {}

void TvDisplayObserver::update()
{
    float updatedDetails=weatherObserver->getWeatherDetails();
    cout<<"**** Tv Par Weather Samachar 😁🌈🌧 ***"<<endl;
    cout<<"---Current Temprature-- ::"<<updatedDetails<<endl;
}