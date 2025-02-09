#include <iostream>


int gcd(int a, int b){ // recursion
	if (a == 0)
		return b;
	return gcd(b % a, a);
}

int lcm(int a, int b) {
	return (a * b) / gcd(a, b);
}

int main() {

	int x, y, z;

	std::cin >> x >> y >> z;

	if (x >= 10 && x <= 100) {
		if (y >= 10 && y <= 100) {
			if (z >= 10 && z <= 100) {
				std::cout << lcm(lcm(x, y), lcm(y, z));
				return 0;
			}
		}			
	}
	
	std::cout << "Invalid input data!" << std::endl;
	return 0;
}