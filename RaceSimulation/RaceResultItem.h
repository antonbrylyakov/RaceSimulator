#pragma once
#include "Vehicle.h"

class RaceResultItem sealed
{
	public:
		RaceResultItem(Vehicle* vehicle, double raceTimeHr);
		Vehicle* const getVehicle() const;
		double getRaceTimeHr() const;
	protected:
		Vehicle* _vehicle;
		double _raceTimeHr;

};