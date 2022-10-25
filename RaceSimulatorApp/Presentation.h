#pragma once
#include <iostream>
#include "RaceType.h"
#include "Race.h"

namespace Presentation
{
	void greet();

	std::string getRaceTypeName(RaceType raceType);

	RaceType askRaceTypes();

	int askDistanceKm();

	void showRaceSummary(Race& race);

	void showRegisteredVehicles(VehicleAssignmentReport& assignmentReport);

	int askRegistrationAction(Race& race);

	void assignVehicle(Race& race, int index);

	void clearScreen();
}