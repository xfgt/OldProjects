#include <iostream>

int main() {

	int big = 0;
	int small = 0;

	int arr[9] = { 6, 3, 4, 5 ,2, 1, 7 };


	for (int i = 0; i < 9; i++)
	{
		(arr[i] > arr[i + 1]) ? big++ : small++;
	}
	if (big > small)
		std::cout << "increasing";
	else if (big < small)
		std::cout << "decreasing";
	else if (big == small)
		std::cout << "neutral. staying in place";
	else
		std::cout << "error.";

	return 0;
}