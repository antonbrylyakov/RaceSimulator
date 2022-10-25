#include "VehicleAssignmentReport.h"

VehicleAssignmentReport::VehicleAssignmentReport(VehicleAssignmentItem** items, int count)
{
	_items = items;
	_count = count;
}

VehicleAssignmentReport::~VehicleAssignmentReport()
{
	for (int i = 0; i < _count; ++i)
	{
		delete _items[i];
	}

	delete[] _items;
}

VehicleAssignmentItem* const* const VehicleAssignmentReport::getItems() const
{
	return _items;
}

int VehicleAssignmentReport::getCount() const
{
	return _count;
}
