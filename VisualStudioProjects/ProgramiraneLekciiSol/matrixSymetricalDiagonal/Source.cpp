#include <iostream>
#include <iomanip>



int* getDiagonalValues(int** matrix, int rows, int cols) {

	int* arr = new int[rows];

	for (int i = 0; i < rows; i++)
	{
		arr[i] = matrix[i][i];
	}

	return arr;
}

int main() {

	unsigned rows = 0;
	unsigned cols = 0;
	std::cin >> rows >> cols;
	if (rows == cols && rows <= 9 && cols <= 9) {
		int** matrix = new int* [rows];
		int inputNum = 0;
		for (int i = 0; i < rows; i++) {
			matrix[i] = new int[cols];

			for (int j = 0; j < cols; j++)
			{
				std::cin >> inputNum;
				matrix[i][j] = inputNum;
			}
		}


		for (int i = 0; i < rows; i++) {

			for (int j = 0; j < cols; j++)
			{
				std::cout << std::setw(5) << matrix[i][j];
			}
			std::cout << std::endl;
		}

		std::cout << std::endl;


		int* diagonalArr = new int[rows];

		diagonalArr = getDiagonalValues(matrix, rows, cols);
		int count = 0;
		for (int i = 0; i < rows; i++)
		{
			if (diagonalArr[i] == diagonalArr[rows - i - 1])
				count++;
		}

		if (count == rows) {
			printf("The matrix has a symetrical diagonal!\n");
		}
		else {
			printf("The matrix does not have a symetrical diagonal.\n");
		}

		//mm

		for (int i = 0; i < rows; i++)
		{
			delete[] matrix[i];
			matrix[i] = nullptr;
		}

		delete[] matrix;
		matrix = nullptr;
	}
	
	

	return 0;

}