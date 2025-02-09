#include <iostream>
using namespace std;

int max(int, int);
int min(int, int);
bool even(int);
bool odd(int);
int fillArray(int*, unsigned);
int printArray(int*, unsigned);
int manageArray(int*, unsigned, bool (*f1)(int), int (*f2)(int, int));

int main() {
	const unsigned N = 10;
	int arr[N];
	fillArray(arr, N);
		printArray(arr, N);
	manageArray(arr, N, even, min);
	printArray(arr, N);
	manageArray(arr, N, odd, max);
	printArray(arr, N);
	return 0;
}

int max(int i, int j) { return (i > j) ? i : j; }
int min(int i, int j) { return (i < j) ? i : j; }
bool even(int a) { return (a % 2 != 0); }
bool odd(int a) { return (a % 2 == 0); }

int fillArray(int* arr, unsigned sz) {
	for (unsigned i = 0; i < sz; i++)
		arr[i] = rand() % 100;
	return 0;
}
int printArray(int* arr, unsigned sz) {
	for (unsigned i = 0; i < sz; i++)
		cout << arr[i] << (i == sz - 1 ? "\n" : "\t");
			return 0;
}
int manageArray(int* arr, unsigned sz, bool (*f1)(int), int (*f2)(int, int)) {
	for (unsigned i = 0; i < sz; i++)
		if (f1(arr[i])) arr[i] = f2(i, arr[i]);
	return 0;
}

/*
*   EXPLANATION:
* 
*	1. first we [declare] the functions [on top of main()];
* 
*   2. [under main()] we [define] all functions
* 
*		bool (*f1)(int);
*		This is getting the output of a function and putting it as an argument for another function.
* 
*		(*f1) represents "function 1" and the '*' is "function 1's address", so we pass the address with the ready values-
*		-inside the fucntion's arguments.
*
*		In this case (*f1) is a function which accepts 1 argument of type 'int': ..(int) and returns a boolean value from its result.
*		The second fucntion (*f2) accepts 2 arguments '(int, int)', but this time the return value of f2 is an int number.
*
*/
