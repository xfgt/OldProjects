
#include <iostream>

int main()
{

	/*
	
				*
			   ***
			  *****
			 *******
	*/
	int n;
	char symbol;
	std::cin >> symbol;
    std::cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = n ; j > i; j--)
		{
			std::cout << " ";
		}

		for (int k = 0; k < (2 * i - 1); k++)
		{
			std::cout << symbol;
		}

		/*for (int g = n;  g > i;  g--)
		{
			std::cout << "^";
		}*/
		std::cout << "\n";
	}
	return 0;
}
	

	

	
	
	

