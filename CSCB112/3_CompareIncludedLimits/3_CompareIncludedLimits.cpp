#include <iostream>

#define cMIN_VALUE 0
#define cMAX_VALUE 10


int main() {
	std::cout << "PRESS \[CTRL + C\] TO EXIT!\n";
	double x;
	while(true){
		std::cout << "x: ";
		std::cin >> x;
		if (x >= cMIN_VALUE && x <= cMAX_VALUE) {
			std::cout << x << " belongs to custom range\n";
		}
		else {
			std::cout << x << " does not belong to custom range\n";
		}
	}
	return 0;
}