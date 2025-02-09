

#include <iostream>

int main()
{
    int n =0, sum =0 , num = 0;
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> num;
		sum += num;
	}
	std::cout << sum << std::endl;
}

