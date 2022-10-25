#pragma once
#include "VehicleAssignmentItem.h"
#include "RaceSimulationExports.h"

class VehicleAssignmentReport
{
	public:
		static const int MIN_VEHICLE_NUMBER = 2;
		VehicleAssignmentReport(VehicleAssignmentItem** items, int count);
		RACESIMULATION_API ~VehicleAssignmentReport();
		RACESIMULATION_API VehicleAssignmentItem* const* const getItems() const;
		RACESIMULATION_API int getCount() const;
		RACESIMULATION_API int getAssignedCount() const;
		RACESIMULATION_API bool isReadyToRace() const;
		RACESIMULATION_API VehicleAssignmentItem* const operator [](const int i) const;
	private:
		VehicleAssignmentItem** _items;
		int _count;
		int _assignedCount;
};
