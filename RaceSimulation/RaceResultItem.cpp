﻿#include "RaceResultItem.h"

RaceResultItem::RaceResultItem(Vehicle* vehicle, double raceTimeHr)
{
	// TODO: проверить на nullptr
	_vehicle = vehicle;
	_raceTimeHr = raceTimeHr;
}

Vehicle* const RaceResultItem::getVehicle() const
{
	return _vehicle;
}

double RaceResultItem::getRaceTimeHr() const
{
	return _raceTimeHr;
}
