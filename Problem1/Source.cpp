#include <iostream>


int getBiggest(int* arr) {
	int biggest = 0;
	for (int i = 0; i < 2; i++)
	{
		(arr[i] > arr[i + 1]) ? biggest = arr[i] : biggest = arr[i + 1];
	}
	return biggest;
}

int getSmallest(int* arr) {
	int smallest = 0;
	for (int i = 0; i < 2; i++)
	{
		(arr[i] < arr[i + 1]) ? smallest = arr[i] : smallest = arr[i + 1];
	}
	return smallest;
}


bool fitsIn(int sample, int* arrCompare, int arrCompare_size) {
	bool itsIn = false;
	for (int i = 0; i < arrCompare_size; i++)
	{
		if (sample == arrCompare[i]) {
			itsIn = true;
			break;
		}
		else {
			continue;
		}
	}
	return itsIn;
}


int main() {

	int arr1[] = { 5, 2, 3, 8, 1, 6, 4, 12, 9, 10 }; int arr1_size = sizeof(arr1) / sizeof(arr1[0]);
	int arr2[] = { 6, 9, 4 };

	int biggest = getBiggest(arr2);
	int smallest = getSmallest(arr2);
	int diff = biggest - smallest;


	int* newLimitsArr = new int[diff];

	for (int i = 0; i <= diff; i++)
	{
		newLimitsArr[i] = smallest;
		smallest++;
	}
	int sum = 0;
	for (int i = 0; i <= diff; i++)
	{
		if (fitsIn(newLimitsArr[i], arr1, arr1_size)) {
			std::cout << newLimitsArr[i] << std::endl;
			sum += newLimitsArr[i];
		}
	}

	std::cout << sum << std::endl;


	return 0;
}