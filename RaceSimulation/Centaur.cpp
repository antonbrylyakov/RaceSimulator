#include "Centaur.h"

Centaur::Centaur()
{
    _name = "Кентавр";
    _velocityKmh = 15;
    _motionTimeBeforeRestHr = 8;
}

double Centaur::getRestTimeHr(const int distanceKm) const
{
    return 8 * getRestNumber(distanceKm);
}