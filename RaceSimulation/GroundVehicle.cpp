#include "GroundVehicle.h"

GroundVehicle::GroundVehicle()
{
    _type = GROUND;
}

GroundVehicle::~GroundVehicle()
{
}

double GroundVehicle::getMotionTimeHr(const int distanceKm) const
{
    return distanceKm / _velocityKmh;
}

int GroundVehicle::getRestNumber(const int distanceKm) const
{
    // деление нацело
    return static_cast<int>(getMotionTimeHr(distanceKm)) / _motionTimeBeforeRestHr;
}

double GroundVehicle::getRaceTimeHr(const int distanceKm) const
{
    return getMotionTimeHr(distanceKm) + getRestTimeHr(distanceKm);
}
