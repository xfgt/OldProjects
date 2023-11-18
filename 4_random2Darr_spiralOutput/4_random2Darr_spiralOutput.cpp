
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

	
	int matrixArea = rows * cols;
	int holder = 0;
	std::string stringNums = "";

	int i = 0;
	int** defaultMatrix = new int* [rows];
	

	for (int r = 0; r < rows; ++r) {
		defaultMatrix[r] = new int[cols];


		for (int c = 0; c < cols; ++c) {

			iSecret = rand() % (122 + 1 - (-12)) + (-12);
			defaultMatrix[r][c] = iSecret;
			stringNums += iSecret;

			std::cout << defaultMatrix[r][c] << " ";

		}
		std::cout << std::endl;
		
	}
	iSecret = NULL;
	std::cout << std::endl;
	
	int* numsToInt = new int[matrixArea];
	for (int i = 0; i < matrixArea; i++)
		numsToInt[i] = NULL;

	for (int i = 0; i < matrixArea; i++)
	{
		numsToInt[i] = stringNums[i] - 0;
		stringNums[i] = NULL;
		std::cout << numsToInt[i] << " ";
	}


	int middle = 0;
	for (int x = 0; x <= (matrixArea/2); x++)
	{
		
		if (numsToInt[x] > numsToInt[matrixArea - x - 1]) {

			middle = numsToInt[x];

		}
		else {
			middle = numsToInt[matrixArea - x - 1];

		}
		
	}
	std::cout << std::endl << "middle = " << middle;


	
	
	
	
	/*
		TODO:
			- sort stringNums first
				* set the stringNums in one array ^
				* 
				* get min num
				* get max num
				* 
				* sort stringNums
				
			- arrange them in a spiral
	*/




/// MANAGE THE MEMORY
	for (int i = 0; i < rows; ++i) {
		delete[] defaultMatrix[i];
		defaultMatrix[i] = nullptr;
	}
	delete[] defaultMatrix;
	defaultMatrix = nullptr;

	
		

	
	return 0;


}
