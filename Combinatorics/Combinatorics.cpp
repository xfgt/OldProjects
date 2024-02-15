#include <iostream>

void combinations(int* arr, int arrSize, int lastIndex) {
	int a = arr[0];
	int b = arr[1];
	int c = arr[2];
	while (a <= arr[lastIndex]) {

		if (c <= arrSize) {

			for (int i = b; i < arrSize; i++)
			{
				std::cout << a << b << arr[i] << std::endl;
			}
			b = c;
			c++;
		}
		else {
			c--;
		}



		if (b == c) {
			a++;
			b = a + 1;
			c = b + 1;

		}

	}

}


int main()
{

	int arr[] = { 1, 2, 3, 4, 5 };
	//   *indexes = { 0, 1, 2, 3, 4 };

	int arr_size = sizeof(arr) / sizeof(arr[0]);

	combinations(arr, arr_size, 2);



	return 0;
}