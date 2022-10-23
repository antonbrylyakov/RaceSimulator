#pragma once
#include "VehicleType.h"

// Абстрактный базовый класс для ТС
class Vehicle
{
public:
    VehicleType getVehicleType();
    virtual double getRaceTimeHr(const int distanceKm) const = 0;
protected:
    VehicleType _type;
    int _velocityKmh;
};
