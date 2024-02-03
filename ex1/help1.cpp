#include <iostream>

int main()
{
	int x = 1, y = 1;
	for (; y; std::cout << x << " " << y << std::endl)
	{
		y = x++ <= 5;
	}
	std::cout << std::endl;
	return 0;
}
