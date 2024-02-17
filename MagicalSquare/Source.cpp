#include <iostream>
#include <iomanip>



int sumEachCol(int** arr, int rows,  int cols) {

	int sum = 0;
	for (int i = 0; i < cols; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			sum += arr[j][i];

		}
		
	}
	return sum;
}


int sumEachRow(int** arr, int rows, int cols) {


	int sum = 0;
	for (int i = 0; i < cols; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			sum += arr[i][j];

		}
		
	}
	return sum;
}

int sumRightDiagonal(int** arr, int rows, int cols) {
	
	int sum = 0;
	for (int i = 0; i < cols; i++)
	{	
		sum += arr[i][i];
	}
	
	return sum;
}

int sumLeftDiagonal(int** arr, int rows, int cols) {

	int sum = 0;
	int i = 0;
	for (int r = rows-1; r >= 0, i < cols; --r)
	{
		sum += arr[i][r];
		i++;
	}

	return sum;

}


int main() {

	int rows = 0;
	int cols = 0;
	std::cin >> rows >> cols;

	int** a = new int* [rows];
	int num = 0;

	for (int r = 0; r < rows; r++)
	{
		a[r] = new int[cols];
		for (int c = 0; c < cols; c++)
		{
			std::cin >> num;
			a[r][c] = num;
		}
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			std::cout << std::setw(7) << a[i][j];
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	
	int colsSum = sumEachCol(a, rows, cols);
	int rowsSum = sumEachRow(a, rows, cols);
	int rightDiagSum = sumRightDiagonal(a, rows, cols);
	int leftDiagSum = sumLeftDiagonal(a, rows, cols);
	
	printf("colsSum: %d\nrowsSum: %d\nrightDiagSum: %d\nleftDiagSum: %d\n", colsSum, rowsSum, rightDiagSum, leftDiagSum);

	if (colsSum == rowsSum == rightDiagSum == leftDiagSum) {
		std::cout << "\nWe've got a magical square!\n\n";
	}
	else {
		std::cout << "\nWe don't have a magical square.\n\n";
	}



	//mm
	for (int i = 0; i < rows; i++)
	{
		delete[] a[i];
		a[i] = nullptr;
	}

	delete[] a;
	a = nullptr;

	return 0;
}