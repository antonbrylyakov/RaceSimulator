#pragma once
#include "VehicleAssignmentItem.h"

class VehicleAssignmentReport
{
	public:
		VehicleAssignmentReport(VehicleAssignmentItem** items, int count);
		~VehicleAssignmentReport();
		VehicleAssignmentItem* const* const getItems() const;
		int getCount() const;
	private:
		VehicleAssignmentItem** _items;
		int _count;
};
