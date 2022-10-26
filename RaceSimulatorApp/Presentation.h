#pragma once
#include <iostream>
#include "RaceType.h"
#include "Race.h"

namespace Presentation
{
	void greet();

	void showInvalidInputMessage();

	std::string getRaceTypeName(RaceType raceType);

	RaceType askRaceTypes();

	int askDistanceKm();

	void showRaceSummary(Race& race);

	void showRegisteredVehicles(VehicleAssignmentReport& assignmentReport);

	void registerVehicles(Race& race);

	int askRegistrationAction(Race& race);

	void assignVehicle(Race& race, int index);

	void showRaceResults(RaceResultReport& resultsReport);

	bool askNewRaceAction();

	void clearScreen();

	void showUnexpectedError(std::exception ex);
}
