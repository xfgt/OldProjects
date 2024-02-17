#include <iostream>
#include <algorithm>
#include <iostream>



int main() {

	bool condition = false;

	int p = 0;
	std::cin >> p;

	if (p % 4 == 0 || p % 7 == 0)
		condition = true;
	std::cout << condition << std::endl;

	condition = false;
	
	int a, b, c, x;
	std::cin >> x >> a >> b >> c;
	if (a != 0) {
		int result = a * pow(x, 2) + b * x + c;

		if (result != 0)
			condition = false;
		else
			condition = true;
	}
	std::cout << condition << std::endl;

	condition = false;


	unsigned a, b;

	std::cin >> a >> b;
	if (a < 5 || b < 5)
		condition = true;

	std::cout << condition << std::endl;

	condition = false;

	unsigned a, b, c, d, f;
	std::cin >> a >> b >> c >> d >> f;

	if (c <= f && d <= f) {
		if (a > c || a > d || b > c || b > d)
			condition = true;
	}
	std::cout << condition << std::endl;
	condition = false;


	int a, b;
	if (a < -5 && b < -5)
		condition = true;

	std::cout << condition << std::endl;
	
	condition = false;


	unsigned a, b;

	if (a <= 5 || a <= 10 && b <= 5 || b <= 10)
		condition = true;

	std::cout << condition << std::endl;
	condition = false;

	unsigned x;

	if (x >= 0 && x <= 1)
		condition = true;

	std::cout << condition << std::endl;

	condition = false;
	

	int x, a, b, c; 
	std::cin >> x >> a >> b >> c;


	int mx = std::max(a, b, c);
	if (x == mx)
		condition = true;

	std::cout << condition << std::endl;

	condition = false;



	int x, a, b, c;
	std::cin >> x >> a >> b >> c;


	int mx = std::max(a, b, c);
	if (x > mx || x < mx)
		condition = true;

	std::cout << condition << std::endl;

	condition = false;


	bool x = true;
	bool y = false;

	if (x == true || y == true)
		condition = true;

	std::cout << condition << std::endl;
	condition = false;



	bool x = true;
	bool y = true;

	if (x == true || y == true)
		condition = true;

	std::cout << condition << std::endl;
	condition = false;

	signed a, b, c;
	std::cin >> a >> b >> c;

	if (a < 0 && b < 0 && c < 0)
		condition = true;

	std::cout << condition << std::endl;

	condition = false;




	return 0;
}