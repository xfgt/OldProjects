#include <iostream>


int main() {

	for (int i = 0; i < 7; i++)
	{
		if (i != 3) {
			std::cout << "*";
			for (int j = 0; j < 3; j++)
			{
				std::cout << " ";
			}
			if (i == 6) {
				std::cout << "*"; printf("elloworld");

			}
			else {
				std::cout << "*" << std::endl;

			}
		}
		else {
			std::cout << "*";
			for (int j = 0; j < 3; j++)
			{
				std::cout << "*";
			}
			std::cout << "*" << std::endl;
		}
		
	}

	
	


	return 0;
}