#include <iostream>


int main() {
	
	int hoursAweek = 0;
	std::cin >> hoursAweek;
	
	float taxRate = 29 / 100 ; //  29%

	double grossSalary = 0, // === net * taxRate
		netSalary = 0, 
		taxes = 0;
	
	double pricePerHour = 2.5;
	double payAweek = 0;
	
	
		if (hoursAweek > 0 && hoursAweek <= 40) {
			pricePerHour = 2.5;
			payAweek += hoursAweek * pricePerHour;
		}
		else if (hoursAweek > 40 && hoursAweek <= 45) {
			pricePerHour += 1.5;
			payAweek += hoursAweek * pricePerHour;
		}
		else if (hoursAweek > 45) {
			pricePerHour *= 2;
			payAweek += hoursAweek * pricePerHour;
		}
	
		netSalary = payAweek * 4; //month
		grossSalary = netSalary * taxRate;
		taxes = grossSalary - netSalary;

		printf("gross:%f\ntaxes:%f\nnet:%f\n", grossSalary, taxes, netSalary);




	return 0;
}