#include <iostream>


int main() {
	float F;
	std::cin >> F;
	float C = ((F - 32) * 5) / 9;
	printf("F:%f\nC:%f\n", F, C);


	return 0;
}