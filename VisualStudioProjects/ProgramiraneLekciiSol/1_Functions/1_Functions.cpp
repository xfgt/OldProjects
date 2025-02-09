#include <iostream>

void deleteElementOfArray(int* a, int& size, int pos) {
	a[pos] = '\0';
	for (int i = pos; i < size; i++)
	{
		a[i] = a[i+1];
	}
	size -= 1;
}
void addElementAtEndOfArray(int* a, int& size, unsigned element) {
	size += 1;
	for (int i = size-1; i < size; i++)
	{
		a[i] = 0;
	}
	a[size-1] = element;

}
void addElementAtSelectedPosOfArray(int *a, int& size, int pos, unsigned element) {

	if (a[pos] != '\0') {
		size += 1;
		for (int i = size-1; i < size; i++)
		{
			a[i] = 0;
		}
		
		for (int i = size-1; i > pos; i--)
		{
			a[i] = a[i - 1];
		}
		
		a[pos] = element;
	}

	else {
		a[pos] = element;

	}

}
void changeElementValueAtPosOfArray(int* a, int pos, unsigned element) {
	a[pos] = element;

}

void printArr(int* a, int size) {

	for (int i = 0; i < size; i++)
	{
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;

}

int main()
{
	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	int arrSize = sizeof(arr) / sizeof(arr[0]);


	printArr(arr, arrSize);
	deleteElementOfArray(arr, arrSize, 4);
	printArr(arr, arrSize);

	addElementAtEndOfArray(arr, arrSize, 6);
	printArr(arr, arrSize);

	addElementAtSelectedPosOfArray(arr, arrSize, 1, 4);
	printArr(arr, arrSize);

	changeElementValueAtPosOfArray(arr, 8, 3); 
	printArr(arr, arrSize);

	return 0;
}
