#pragma once
#include "Vehicle.h"

class RaceResultItem
{
	public:
		RaceResultItem(Vehicle* vehicle, double raceTimeHr);
		RACESIMULATION_API Vehicle* const getVehicle() const;
		RACESIMULATION_API double getRaceTimeHr() const;
	protected:
		Vehicle* _vehicle;
		double _raceTimeHr;

};