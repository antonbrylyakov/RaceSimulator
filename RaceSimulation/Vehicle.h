﻿#pragma once
#include "VehicleType.h"
#include <string>

// Абстрактный базовый класс для ТС
class Vehicle
{
public:
    virtual ~Vehicle();
    std::string& getName();
    VehicleType getVehicleType();
    virtual double getRaceTimeHr(const int distanceKm) const = 0;
protected:
    VehicleType _type;
    int _velocityKmh;
    std::string _name;
};
