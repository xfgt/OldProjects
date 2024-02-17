#include <iostream>
#include <cmath>
#include <math.h>


int main() {

	float radius = 0;
	std::cin >> radius;

	float circum = 2 * radius * acos(-1.0);
	float area = acos(-1.0) * pow(radius, 2);
	std::cout << circum << std::endl;
	std::cout << area << std::endl;

	return 0;
}