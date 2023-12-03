#include <iostream>

void deleteElementOfArray(int* a, int pos) {
	a[pos] = NULL;
}
int addElementAtEndOfArray(int* a, int n, unsigned element) {
	a[n] = element;
	return (n + 1);
}
void addElementAtSelectedPosOfArray(int *a, int n, int pos, unsigned element) {
	if (a[pos] != NULL) {
		a[n + 1] = NULL;
		for (int i = n+1; i >= pos; --i)
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
int main()
{
	int n;
	std::cin >> n;

	int* arr = new int[n];
	for (int i = 0; i < n; i++)
		arr[i] = NULL;
	
	for (int i = 0; i < n; i++)
		arr[i] = i;
	
	for (int i = 0; i < n; i++)
		std::cout << arr[i] << " ";

	std::cout << std::endl << std::endl;
	std::cout << "array after applied functions: " << std::endl;
	deleteElementOfArray(arr, 3);
	addElementAtSelectedPosOfArray(arr, n, 5, 8);
	changeElementValueAtPosOfArray(arr, 7, 9);
	n = addElementAtEndOfArray(arr, n, 6);
	for (int i = 0; i < n; i++)
		std::cout << arr[i] << " ";
}
