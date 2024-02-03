//Използвайте +, -, *, /, % .

#include <iostream>

int main()
{
	int a, b;

	std::cin >> a;
	std::cin >> b;

	int sum = a + b;
	int sub = a - b;
	int mult = a * b;
	int div = a / b;
	int mod = a % b;


	std::cout << sum << std::endl;
	std::cout << sub << std::endl;
	std::cout << mult << std::endl;
	std::cout << div << std::endl;
	std::cout << mod << std::endl;


}
