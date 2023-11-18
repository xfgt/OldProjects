
#include <iostream>

int main()
{
	int iSecret;
	srand(time(NULL));
	srand(rand());
	srand(rand());

	int rows = 0;
	int cols = 0;

	std::cout << "rows = "; std::cin >> rows;
	std::cout << "cols = "; std::cin >> cols;
	int areaSize = rows * cols;
	
	
	

	int i = 0;
	int** defaultMatrix = new int* [rows];

	int* dMArr = new int[areaSize];
	for (int i = 0; i < areaSize; i++)
		dMArr[i] = NULL;
	


	for (int r = 0; r < rows; ++r) {
		defaultMatrix[r] = new int[cols];

		for (int c = 0; c < cols; ++c) {

			iSecret = rand() % (122 + 1 - (-12)) + (-12);
			defaultMatrix[r][c] = iSecret;
			
			dMArr[c] = iSecret; 
			std::cout << defaultMatrix[r][c] << " ";

		}
		std::cout << std::endl;
		
	}
	std::cout << std::endl;
	
	for (int i = 0; i < areaSize; i++)
	{
		std::cout << dMArr[i] << " ";
	}
	
	
	
	/*
		TODO:
			- sort nums first
				* set the nums in one array
				* 
				* get min num
				* get max num
				* 
				* sort nums
				
			- arrange them in a spiral
	*/




	// MANAGE THE MEMORY
	for (int i = 0; i < rows; ++i) {
		delete[] defaultMatrix[i];
		defaultMatrix[i] = nullptr;
	}
	delete[] defaultMatrix;
	defaultMatrix = nullptr;

	/* if dMArr **
	
	for (int i = 0; i < areaSize; ++i) {
		delete[] dMArr[i];
		dMArr[i] = nullptr;
	}
	delete[] dMArr;
	dMArr = nullptr;*/


	return 0;


}
