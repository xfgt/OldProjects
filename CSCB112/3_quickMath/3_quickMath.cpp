#include <iostream>

int main()
{
    int a, b;

    std::cin >> a;
    std::cin >> b;

	a += b;
	std::cout << a << std::endl;
	b += a;
	std::cout << b << std::endl;

	a -= b;
	std::cout << a << std::endl;
	b -= a;
	std::cout << b << std::endl;

	a *= b;
	std::cout << a << std::endl;
	b *= a;
	std::cout << b << std::endl;
	
	a /= b;
	std::cout << a << std::endl;
	b /= a;
	std::cout << b << std::endl;

	a %= b;
	std::cout << a << std::endl;
	b %= a;
	std::cout << b << std::endl;
}
