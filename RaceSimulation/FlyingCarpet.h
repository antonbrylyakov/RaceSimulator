#pragma once
#include "AirVehicle.h"

class FlyingCarpet : AirVehicle
{
	public:
		FlyingCarpet();
	protected:
		double getDistanceReductionPercent(const int distanceKm) const override;
};
