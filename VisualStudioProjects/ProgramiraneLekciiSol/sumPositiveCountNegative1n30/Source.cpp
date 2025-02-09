#include <iostream>

int main() {



	const unsigned n = 0;
	int arr[10] = { 1 , -5, 3, 26, -8 };

	int sumPos = 0;
	int countNeg = 0;

	if (n >= 1 && n <= 30) {
		for (int i = 0; i < n; i++)
		{
			if (arr[i] < 0)
				countNeg++;
			else if (arr[i] > 0)
				sumPos += arr[i];
		}
	}

	return 0;
}