#include <iostream>

using namespace std;


int main() {


	// Task 3 ISBN code 0-7167-03r4-0 missing digit is 4
	char isbn[14], * isbn_ptr; //0-7167-03r4-0
	int* isbn_numbers = new int[10];
	cout << "Please enter an ISBN code: ";
	cin >> isbn;

	isbn_ptr = isbn;
	int i = 0, k = 10;
	int ind = -1;
	while (*isbn_ptr != '\0') {
		if (*isbn_ptr >= 48 && *isbn_ptr <= 57) {			// from 0 to 9
			isbn_numbers[i++] = (int)(*isbn_ptr) - 48;
		}
		else {
			if (*isbn_ptr != '-') {
				cout << *isbn_ptr << endl;
				ind = k;
				isbn_numbers[i++] = -1;
			}
		}
		isbn_ptr++;
		if (*isbn_ptr != '-') k--;
	}

	if (ind != -1) {
		cout << "There is missing number in the ISBN code and we will find it :)\n";
		int sum = 0;
		for (int i = 0; i < 10; i++) {
			if (isbn_numbers[i] != -1) {
				sum += (10 - i) * isbn_numbers[i];
			}
		}
		cout << "missing possition " << ind << endl;
		int missingDigit = 0;
		while ((ind * missingDigit + sum) % 11 != 0) {
			missingDigit++;
		}
		cout << "The missing number is " << missingDigit << endl;
	}
}