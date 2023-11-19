
#include <iostream>


void sort(int num[], int len);
void swapNums(int nums[],
	int first, int second);

void sort(int num[], int len)
{
	bool isSwapped;

	for (int i = 0; i < len; i++)
	{
		isSwapped = false;
		for (int j = 1; j < len - i; j++)
		{
			if (num[j] < num[j - 1])
			{
				swapNums(num, j, (j - 1));
				isSwapped = true;
			}
		}
		if (!isSwapped)
		{
			break;
		}
	}
}


void swapNums(int nums[],
	int first, int second)
{
	int curr = nums[first];
	nums[first] = nums[second];
	nums[second] = curr;
}


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

	
	/// matrix creation
	int i = 0;
	int** defaultMatrix = new int* [rows]; //!
	for (int r = 0; r < rows; ++r) {
		defaultMatrix[r] = new int[cols]; //!

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
	

	/// 1D array of the matrix
	int* numsToInt = new int[matrixArea];
	for (int i = 0; i < matrixArea; i++)
		numsToInt[i] = NULL;

	for (int i = 0; i < matrixArea; i++)
	{
		numsToInt[i] = stringNums[i] - 0;
		stringNums[i] = NULL;
		//std::cout << numsToInt[i] << " ";
	}
	std::cout << std::endl;
	

	sort(numsToInt, matrixArea);

	/*std::cout << "\nSorted: ";

	for (int i = 0; i < matrixArea; i++)
		std::cout << numsToInt[i] << " ";
	
	std::cout << "\n";*/


	int top = 0,
		bottom = rows - 1,
		left = 0,
		right = cols - 1;

	int index = 0;

	while (1) {

		if (left > right)
			break;

		// print top row
		for (int i = left; i <= right; i++)
			defaultMatrix[top][i] = numsToInt[index++];
		top++;

		if (top > bottom)
			break;

		// print right column
		for (int i = top; i <= bottom; i++)
			defaultMatrix[i][right] = numsToInt[index++];
		right--;

		if (left > right)
			break;

		// print bottom row
		for (int i = right; i >= left; i--)
			defaultMatrix[bottom][i] = numsToInt[index++];
		bottom--;

		if (top > bottom)
			break;

		// print left column
		for (int i = bottom; i >= top; i--)
			defaultMatrix[i][left] = numsToInt[index++];
		left++;
	}


	std::cout << "spiral version: \n";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++)
			std::cout << defaultMatrix[i][j] << " ";
		std::cout << '\n';
	}







	/*int firstSmallest = 0;
	int lastSmallest = 0;
	if (numsToInt[i] < numsToInt[i + 1]) {
		firstSmallest = numsToInt[i];
		for (int j = 0; j < matrixArea; j++)
		{
			if (firstSmallest <= numsToInt[j]) {
				lastSmallest = firstSmallest;
			}
			else {

				firstSmallest = numsToInt[j];
				lastSmallest = firstSmallest;
			}
		}
	}
	else
	{
		firstSmallest = numsToInt[i + 1];
		for (int j = 0; j < matrixArea; j++)
		{
			if (firstSmallest <= numsToInt[j]) {
				lastSmallest = firstSmallest;
			}
			else {

				firstSmallest = numsToInt[j];
				lastSmallest = firstSmallest;
			}
		}
	}
	std::cout << std::endl << "smallest: " << lastSmallest;
	

	int firstBiggest = 0;
	int lastBiggest = 0;
	if (numsToInt[i] > numsToInt[i + 1]) {
		firstBiggest = numsToInt[i];
		for (int j = 0; j < matrixArea; j++)
		{
			if (firstBiggest >= numsToInt[j]) {
				lastBiggest = firstBiggest;
			}
			else {

				firstBiggest = numsToInt[j];
				lastBiggest = firstBiggest;
			}
		}
	}
	else
	{
		firstBiggest = numsToInt[i + 1];
		for (int j = 0; j < matrixArea; j++)
		{
			if (firstBiggest >= numsToInt[j]) {
				lastBiggest = firstBiggest;
			}
			else {

				firstBiggest = numsToInt[j];
				lastBiggest = firstBiggest;
			}
		}
	}
	std::cout << std::endl << "biggest: " << lastBiggest;


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
	std::cout << std::endl << "middle: " << middle;*/


	


	
	
	
	
	/*
		TODO:
			- sort stringNums firstSmallest
				* set the stringNums in one array	^
				* 
				* get min num						^
				* get max num						^
				* 
				* sort stringNums					^
				
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
