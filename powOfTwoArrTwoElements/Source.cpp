#include <iostream>


bool isPowerOfTwo(int x) {
	if (x != 0) {
		float log_two_x = log2(x);

		if (round(log_two_x) == log_two_x) {
			return true;
		}
		else {
			return false;
		}
	}
	return false;
}


int main() {


	unsigned n = 0;
	int arr[10] = { 3, 4, 5, 6, 7, 8 };
	int count = 0;
	for (int i = 0; i < 10; i++)
	{
		if (isPowerOfTwo(arr[i])) {
			count++;
		}
	}
	if (count >= 2)
		std::cout << "yes!\n";
	else
		std::cout << "no!\n";

	


	return 0;
}