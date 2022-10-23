#pragma once
#include "VehicleType.h"

// Абстрактный базовый класс для ТС
class Vehicle
{
public:
    VehicleType getVehicleType();
    virtual double getRaceTimeHr(int distanceKm) = 0;
protected:
    VehicleType _type;
    int _velocity;
};
