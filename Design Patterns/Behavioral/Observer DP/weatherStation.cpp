#include "weatherStation.hpp"

void WeatherStation::add(IObserver *observer){
    observersList.push_back(observer);
}

void WeatherStation::remove(IObserver *observer){
    observersList.erase(find(observersList.begin(),observersList.end(),observer));
}

void WeatherStation::notify(){
    for(auto observer:observersList)
    {
        observer->update();
    }
}

void WeatherStation::setWeatherDetails(float temp){
    temperature= temp>0? temperature+temp:0;    
    notify();

}

float WeatherStation::getWeatherDetails(){
    return temperature;
}