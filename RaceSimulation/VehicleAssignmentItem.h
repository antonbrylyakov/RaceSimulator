#pragma once
#include "Vehicle.h"

class VehicleAssignmentItem
{
	public:
		VehicleAssignmentItem(Vehicle* vehicle, bool assigned, bool availableToAssign);
		Vehicle* const getVehicle() const;
		bool getAssigned() const;
		bool getAvailableToAssign() const;
	private:
		Vehicle* _vehicle;
		bool _assigned;
		bool _availableToAssign;
};

