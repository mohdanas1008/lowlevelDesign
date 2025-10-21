#pragma once
#include "parkingManger.hpp"
#include "ParkingManagerFactory.hpp"
#include "twoVehilerParkingManager.hpp"
#include "fourVehilerParkingManager.hpp"

class Utility {
public:
    static ParkingManager *fourvehilerManager;
    static ParkingManager *TwovehilerManager;

    static void getsomestock();
};
