#include <iostream>
#include <iomanip>

int main() {

	const int SIZE = 50;
	int months = 0;
	double salary = 0;
	int choose = 0;
	double bonus = 0;
	double average = 0;

	std::cout << std::fixed;

	std::cin >> months;
	if (months > 0) {
		double history[SIZE];
		for (int i = 0; i < SIZE; i++)
			history[i] = -1;

		for (int i = 0; i < months; i++)
		{
			std::cin >> salary;
			history[i] = salary;
			
		}

		std::cin >> choose >> bonus;

		if (choose >= 0 && choose <= SIZE) {
			history[choose] += bonus;
		}

		for (int i = 0; i < SIZE; i++) {
			if (history[i] != -1) {

				std::cout << std::setprecision(2) << history[i] << " ";
				average += history[i];
			}
			else {
				break;
			}
		}
		std::cout << std::endl;

		std::cout << average / months << std::endl;

	}
	



	return 0;
}