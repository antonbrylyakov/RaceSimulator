#pragma once
#include "Vehicle.h"

class GroundVehicle: public Vehicle
{
    public:
        GroundVehicle();

    protected:
        double getRaceTimeHr(int distanceKm) override;
        virtual double getMotionTimeHr(int distanceKm) = 0;
        virtual double getRestTimeHr(int distanceKm) = 0;
};
