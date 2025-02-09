#include <iostream>

int main() {


	int* arr = new int[10];

	int number = 0;
	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		std::cin >> number;
		while(!(number > 999))
			std::cin >> number;

		arr[i] = number;
		sum += arr[i];
	}

	for (int i = 0; i < 10; i++)
	{
		std::cout << arr[i] << " ";

	}
	std::cout << "\naverage = " << sum / 10;




	return 0;
}