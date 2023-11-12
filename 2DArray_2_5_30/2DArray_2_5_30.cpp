

#include <iostream>

int main() {
	// get array size from user input
	int rows = 0;
	int cols = 0;
	
	std::cin >> rows;
	std::cin >> cols;

	
	int** matrix = new int* [rows]; // a pointer to array of pointers
	int i = 0;
	
	
	for (int row = 0; row < rows; ++row) {
		
		matrix[row] = new int[cols]; // allocate memory for current sub-array
		for (int col = 0; col < cols; ++col) {
			matrix[row][col] = i++;
			std::cout << matrix[row][col] << " ";
		}
		std::cout << std::endl;
	}




	//MANAGE THE MEMORY
	for (int row = 0; row < rows; ++row) {
		delete[] matrix[row];
		matrix[row] = nullptr;
	}
	delete[] matrix;
	matrix = nullptr;
	return 0;
}

