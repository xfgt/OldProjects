#include <iostream>

int main()
{
	int a, m, n;
	int y = 0;

	std::cin >> a >> m >> n;

	for (int i = 1; i < n; i++)
	{
		for (int j = 1; j < m; j++)
		{
			y += (a + j) / (i + j);
		}
	}

	std::cout << "y = " << y << std::endl;
}
