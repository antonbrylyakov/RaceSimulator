#include "GroundVehicle.h"

GroundVehicle::GroundVehicle()
{
    _type = VehicleType.GROUND;
}

double GroundVehicle::getRaceTimeHr(int distanceKm)
{
    return getMotionTimeHr(distanceKm) + getRestTimeHr(distanceKm);
}
