#include "MobileDisplayObserver.hpp"

MobileDisplayObserver::MobileDisplayObserver(IWeatherObservable *observable) : weatherObserver(observable) {}

void MobileDisplayObserver::update()
{
    float updatedDetails=weatherObserver->getWeatherDetails();
    cout<<"Mobile Display Weather Deatils::"<<endl;
    cout<<"---Current Temprature-- ::"<<updatedDetails<<endl;
}