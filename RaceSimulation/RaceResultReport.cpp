#include "RaceResultReport.h"

RaceResultReport::RaceResultReport(RaceResultItem** items, int count)
{
	_items = items;
	_count = count;
}

RaceResultReport::~RaceResultReport()
{
	for (int i = 0; i < _count; ++i)
	{
		delete _items[i];
	}

	delete[] _items;
}

int RaceResultReport::getCount() const
{
	return _count;
}
