#pragma once
#include "RaceResultItem.h"
#include "RaceSimulationExports.h"

class RaceResultReport
{
	public:
		// конструктор незачем экспортировать пользователям, т.к. они не создают. Что делать для Linux?
		RaceResultReport(RaceResultItem** items, int count);
		RACESIMULATION_API ~RaceResultReport();
		RACESIMULATION_API RaceResultItem* const * const getItems() const;
		RACESIMULATION_API int getCount() const;
	private:
		RaceResultItem** _items;
		int _count;
};
