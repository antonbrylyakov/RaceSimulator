#include "Presentation.h"

void Presentation::greet()
{
	std::cout << "Добро пожаловать в гоночный симулятор!" << std::endl;
}

RaceType Presentation::askRaceTypes()
{
	std::cout << GROUND_RACE << ". Гонка для наземного транспорта" << std::endl;
	std::cout << AIR_RACE << ". Гонка для воздушного транспорта" << std::endl;
	std::cout << MIXED_RACE << ". Гонка для наземного и воздушного транспорта" << std::endl;
	int input = 0;
	do
	{
		std::cout << "Выберите тип гонки: ";
		std::cin >> input;
		if (input < 1 || input > 2)
		{
			input = 0;
			std::cout << "Введено неверное значение, повторите ввод!" << std::endl;
		}
	} while (input == 0);

	return static_cast<RaceType>(input);
}

int Presentation::askDistanceKm()
{
	int input = 0;
	do
	{
		std::cout << "Укажите длину дистанции, км (должна быть положительна): ";
		std::cin >> input;
		if (input <= 0)
		{
			input = 0;
			std::cout << "Введено неверное значение, повторите ввод!" << std::endl;
		}
	} while (input == 0);

	return input;
}

void Presentation::showRegisteredVehicles(VehicleAssignmentReport& assignmentReport)
{
	int assignedCount = assignmentReport.getAssignedCount();
	std::string vnames;

	if (assignedCount < 2)
	{
		std::cout << "Должно быть зарегистрировано хотя бы" << assignmentReport.MIN_VEHICLE_NUMBER << "транспортных средства";
	}

	if (assignedCount > 0)
	{
		std::cout << "Зарегистрированные транспортные средства: ";
		bool hasAssignedShown = false;
		for (int i = 0; i < assignmentReport.getCount(); ++i)
		{
			if (assignmentReport[i]->getAssigned())
			{
				if (hasAssignedShown)
				{
					std::cout << ", ";
				}

				std::cout << assignmentReport[i]->getVehicle()->getName();
				hasAssignedShown = true;
			}
		}

		std::cout << vnames << std::endl;
	}

	for (int i = 0; i < assignmentReport.getCount(); ++i)
	{
		// При желании как-то по-разному можно показать недоступные ТС
		std::cout << (i + 1) << ". " << assignmentReport[i]->getVehicle()->getName() << std::endl;
	}

	if (assignmentReport.isReadyToRace())
	{
		std::cout << "0. Закончить регистрацию" << std::endl;
	}
}

int Presentation::askRegistrationAction(Race& race)
{
	auto assignmentReport = race.createAssignmentReport();
	showRegisteredVehicles(assignmentReport);
	int input = 0;
	bool isInputValid = false;
	do
	{
		std::cout << "Выберите действие: ";
		std::cin >> input;
		isInputValid = input > 0 && input <= assignmentReport.getCount() || input == 0 && assignmentReport.isReadyToRace();
		if (!isInputValid)
		{
			std::cout << "Введено неверное значение, повторите ввод!" << std::endl;
		}
	} while (!isInputValid);

	return input;
}
