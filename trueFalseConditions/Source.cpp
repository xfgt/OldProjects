#include <iostream>


int main() {

	bool condition = false;

	int a;
	std::cin >> a;

	if (a % 5 == 0)
		condition = true;

	std::cout << condition << std::endl;

	condition = false;

	int x = 0;
	std::cin >> x;



	if (x >= 2 && x <= 6)
		condition = true;
	
	std::cout << condition << std::endl;
	condition = false;

	int x = 0;
	std::cin >> x;
	if (!x >= 2 && !x <= 6)
		condition = true;

	std::cout << condition << std::endl;
	condition = false;

	int x = 0;
	std::cin >> x;

	if (x >= 2 && x <= 6)
		condition = true;
	else if (x <= -4 && x >= -2)
		condition = true;
	

	std::cout << condition << std::endl;

	condition = false;

	int a, b, c;

	std::cin >> a >> b >> c;

	if (a < 0 || b < 0 || c < 0)
		condition = true;

	std::cout << condition << std::endl;

	condition = false;

	int a, b, c;

	std::cin >> a >> b >> c;
	if (a == b == c)
		condition = true;

	std::cout << condition << std::endl;

	return 0;
}