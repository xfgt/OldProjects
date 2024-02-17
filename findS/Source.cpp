#include <iostream>

int main() {


	int S = 0;
	int n = 0;
	int k = 0;
	std::cin >> n >> k;


	for (int i = 1; i <= n; i++)
	{
		S += (pow((i - 2), 2) + (k * i));
		std::cout << S << std::endl;

	}
	std::cout << S << std::endl;
	

	return 0;
}