#include"goodsVehicle.hpp"
#include"normalDriveStrategy.hpp"

GoodsVehicle::GoodsVehicle() : Vehicle(new NormalDriveStrategy()) {}