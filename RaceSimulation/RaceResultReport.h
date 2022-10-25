#pragma once
#include "RaceResultItem.h"

class RaceResultReport
{
	public:
		RaceResultReport(RaceResultItem** items, int count);
		~RaceResultReport();
		RaceResultItem* const * const getItems() const;
		int getCount() const;
	private:
		RaceResultItem** _items;
		int _count;
};
