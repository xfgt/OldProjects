#include <iostream>

int main() {

	int inputNumber = 0;
	int n = 0;
	std::cin >> n;
	int* arr = new int[10];
	for (int i = 0; i < 10; i++)
	{
		
		 while (!(inputNumber >= 22 && inputNumber <= 50)) {
			std::cin >> inputNumber;

		 }
		
		arr[i] = inputNumber;
		inputNumber = 0;

				
	}
	std::cout << "\nn: " << n;
	std::cout << "\ncut array: ";
	for (int j = 0; j < n; j++) // just print to n
	{
		std::cout << arr[j] << " ";
	}
	
	std::cout << "\nwhole array: ";



	int jDiff = 0;
	int tempSmallest = 0;
	int found = 0;
	int position = 0;


// GET CLOSEST NUMBER TO THE FIRST INDEX OF THE WHOLE ARRAY
	for (int h = 1; h < 10; h++) // whole array
	{
		jDiff = arr[0] - arr[h];
		
		if (jDiff == 0 || jDiff == 1) {
			found = arr[h];
			break;
		}
		else if (jDiff < 0) {
			if (tempSmallest != 0) {
				if (jDiff > tempSmallest) {
					tempSmallest = jDiff;
					found = arr[h];
					position = h;
				}
			}
			else {
				tempSmallest = jDiff;
				found = arr[h];
				position = h;
			}
		}
		
	}
	for (int l = 1; l < 10; l++) // whole array
	{
		std::cout << arr[l] << " ";
	}
	printf("\n\nClosest to %d is %d, which is on position %d from the array.\n\n", arr[0], found, position+1);

	std::cout << "Modified array odd & even: ";
	int sum = 0;
	for (int x = 0; x < 10; x++)
	{
		sum += x;
		if (arr[x] % 2 == 0) { // even
			arr[x] = sum + arr[x] + 8;
		}
		else if (arr[x] % 2 == 1) { // odd
			arr[x] *= 2;
			arr[x] -= 3;
		}
		std::cout << arr[x] << " ";
	}

	std::cout << std::endl << std::endl;

	return 0;
}