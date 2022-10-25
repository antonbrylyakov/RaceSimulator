#pragma once
#include <iostream>
#include "RaceType.h"
#include "Race.h"

namespace Presentation
{
	void greet();

	RaceType askRaceTypes();

	int askDistanceKm();

	void showRegisteredVehicles(VehicleAssignmentReport& assignmentReport);

	int askRegistrationAction(Race& race);
}