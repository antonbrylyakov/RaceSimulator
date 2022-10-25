﻿#pragma once
#include "Vehicle.h"
#include "RaceSimulationExports.h"

class RACESIMULATION_API AirVehicle : public Vehicle
{
	public:
		AirVehicle();
		double getRaceTimeHr(const int distanceKm) const override;
	protected:
		virtual double getDistanceReductionPercent(const int distanceKm) const = 0;
};