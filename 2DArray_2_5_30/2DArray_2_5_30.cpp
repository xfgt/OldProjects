#include <iostream>

int main() {
	// get array size from user input

	int rows = 0;
	int cols = 0;
	
	std::cout << "rows = "; std::cin >> rows;
	std::cout << "cols = "; std::cin >> cols;
	
		
	int** matrix = new int* [rows]; // a pointer to array of pointers [ 2*(rows*4) = cd]
	int i = 0;
		
	for (int r = 0; r < rows; ++r) {
		
		matrix[r] = new int[cols]; // allocate memory for current sub-array

		for (int c = 0; c < cols; ++c) {
			matrix[r][c] = i++; // look up with &matrix[r][c]
			std::cout << matrix[r][c] << " ";
		}
		std::cout << std::endl;

	}

	/*
		the for loops execute from "inside to outside" (col to row)

		so in this case 'col' changes until it reaches the max, then we continue with 'row'
		after that the process repeats until 'col' reaches max again.

	*/


	//MANAGE THE MEMORY
	for (int i = 0; i < rows; ++i) {
		delete[] matrix[i]; // this is a must when we have a double pointer ( line 12 )
		matrix[i] = nullptr;
	}


	delete[] matrix;
	matrix = nullptr;
	return 0;
}

