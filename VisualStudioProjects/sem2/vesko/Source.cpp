#include <iostream>



int main() {

	int r, c;

	std::cin >> r >> c;

	int n = 0;
	int indexR = 0;
	int indexC = 0;
	int veskoPot = 0;

	int** matrix = new int*[r];
	std::cin >> n;
	while (n != -1) {
		std::cin >> indexR >> indexC >> veskoPot;
		for (int i = 0; i < r; i++) {
			matrix[i] = new int[c];
			for (int j = 0; j < c; j++)
				do
					std::cin >> matrix[i][j];
			while (matrix[i][j] < 0); // todo :(
		}

	}
	

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			std::cout << matrix[i][j];

		}
		std::cout << std::endl;
	}

}