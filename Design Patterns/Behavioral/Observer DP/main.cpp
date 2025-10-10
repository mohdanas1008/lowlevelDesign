#include<bits/stdc++.h>
#include "weatherStation.hpp"
#include "MobileDisplayObserver.hpp"
#include "TvDisplayObserver.hpp"

using namespace std;
int main()
{
    IWeatherObservable *weatherStationObj;
    weatherStationObj= new WeatherStation();

    IObserver *mobileObserver;
    mobileObserver = new MobileDisplayObserver(weatherStationObj);

    weatherStationObj->add(mobileObserver);
    
    IObserver *tvObserver;
    tvObserver = new TvDisplayObserver(weatherStationObj);
    
    weatherStationObj->add(tvObserver);
    // weatherStationObj->setWeatherDetails(10.2);
    
    weatherStationObj->setWeatherDetails(10.2);
    weatherStationObj->setWeatherDetails(11.2);
    return 0;
}
