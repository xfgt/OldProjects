#include <iostream>

int main() {



	const unsigned k = 0;
	int arr[10] = { 1 , -5, 3, 26, -8 };
	int arr2[10] = { 6 , -5, 23, 2, 7 };

	
	int countEq = 0;

	if (k >= 1 && k <= 40) {
		for (int i = 0; i < k; i++)
		{
			if (arr[i] == arr2[i])
				countEq++;
		}
	}

	return 0;
}