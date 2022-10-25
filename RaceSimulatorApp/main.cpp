#include "Presentation.h"
#include "AllTerrainBoots.h"
#include "Broomstick.h"
#include "Camel.h"
#include "Centaur.h"
#include "Eagle.h"
#include "FastCamel.h"
#include "FlyingCarpet.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	int input = 0;
	Presentation::greet();

	int vehicleCount = 7;
	int vehicleIndex = 0;
	Vehicle** vehicles = new Vehicle * [vehicleCount];
	vehicles[vehicleIndex++] = new AllTerrainBoots();
	vehicles[vehicleIndex++] = new Broomstick();
	vehicles[vehicleIndex++] = new Camel();
	vehicles[vehicleIndex++] = new Centaur();
	vehicles[vehicleIndex++] = new Eagle();
	vehicles[vehicleIndex++] = new FastCamel();
	vehicles[vehicleIndex++] = new FlyingCarpet();

	// Область видимости race
	{
		Race race(vehicles, vehicleCount);

		do
		{
			RaceType raceType = Presentation::askRaceTypes();
			int distanceKm = Presentation::askDistanceKm();
			race.init(raceType, distanceKm);
			Presentation::clearScreen();
			bool registrationComplete = false;
			do
			{
				int input = Presentation::askRegistrationAction(race);
				registrationComplete = input == 0;
				if (!registrationComplete)
				{
					Presentation::assignVehicle(race, input - 1);
				}
			} while (!registrationComplete);

			// TODO: вывести результаты гонки

		} while (input != 0);
	}

	// Можем удалить массив ТС

	for (int i = 0; i < vehicleCount; ++i)
	{
		delete vehicles[i];
	}

	delete[] vehicles;

	return 0;
}