#include <iostream>
#include <iomanip>


int main() {

	const int rows = 5;
	const int cols = 5;

	int** a = new int* [rows];
	int num = 0;

	for (int r = 0; r < rows; r++)
	{
		a[r] = new int[cols];
		for (int c = 0; c < cols; c++)
		{
			a[r][c] = num++;
		}
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			std::cout  << std::setw(7) << a[i][j] ;
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	int sum = 0;
	for (int i = 0; i < cols; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			sum += a[j][i];

		}
		
		std::cout << std::setw(7) << sum;
		sum = 0;
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