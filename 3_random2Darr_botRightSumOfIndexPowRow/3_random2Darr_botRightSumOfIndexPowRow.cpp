
#include <iostream>
#include <cmath>


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


	int** matrix = new int* [rows];
	int i = 0;

	for (int r = 0; r < rows; ++r) {

		matrix[r] = new int[cols];

		for (int c = 0; c < cols; ++c) {

			iSecret = rand() % (122 + 1 - (-12)) + (-12);
			if (c >= cols - (r + 1)) {
				if(r > 0)
					matrix[r][c] = pow((c+1)+(c+1), r+1);
				else
					matrix[0][c] = pow((c + 1) + (c + 1), 1); /// first row only r = [0]

				std::cout << matrix[r][c] << " ";
				iSecret = 0;
			}
			else {
				matrix[r][c] = iSecret;
				std::cout << matrix[r][c] << " ";
			}

		}
		std::cout << std::endl;

	}

	//MANAGE THE MEMORY
	for (int i = 0; i < rows; ++i) {
		delete[] matrix[i];
		matrix[i] = nullptr;
	}


	delete[] matrix;
	matrix = nullptr;
	return 0;


}
