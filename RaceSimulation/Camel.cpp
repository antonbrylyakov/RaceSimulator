#include "Camel.h"

Camel::Camel()
{
    _velocityKmh = 10;
    _motionTimeBeforeRestHr = 30;
}

double Camel::getRestTimeHr(const int distanceKm) const
{
    const auto restNumber = getRestNumber(distanceKm);
    if (restNumber == 0)
    {
        return 0;
    }

    // первый отдых 5, остальные 8 часов
    return 5 + (restNumber - 1) * 8;
}
