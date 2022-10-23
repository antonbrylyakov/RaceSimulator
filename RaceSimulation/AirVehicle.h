#pragma once
#include "Vehicle.h"

class AirVehicle : public Vehicle
{
	public:
		AirVehicle();
	protected:
		virtual double getDistanceReductionPercent(const int distanceKm) const = 0;
};