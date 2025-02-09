#include <iostream>
void printArr(int* arr, int size) {

	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

void generateBitmask(int* arrA, int arrASize, int* arrB, int arrBSize) {
	int* sample = new int[10];
	int* bitmaskA = new int[10];
	int* bitmaskB = new int[10];

	int countA = 0;
	int countB = 0;

	for (int i = 0; i < 10; i++)
	{
		sample[i] = i;
		bitmaskA[i] = 0;
		bitmaskB[i] = 0;
	}
	
	
	int j = 0;
	while (j < arrASize) {// arr a lenght
		for (int i = 0; i < 10; i++)
		{
			if (sample[i] == arrA[j]) {
				bitmaskA[i] = 1;
				countA++;
			}
		}
		j++;
	}

	j = 0;
	
	while (j < arrBSize) {
		for (int i = 0; i < 10; i++)
		{
			if (sample[i] == arrB[j]) {
				bitmaskB[i] = 1;
				countB++;
			}
		}
		j++;
	}
	


	printArr(bitmaskA, 10);
	printArr(bitmaskB, 10);

	int match = 0;
	if (countA < countB) {
		for (int i = 0; i < 10; i++)
		{
			if (bitmaskA[i] == 1 && bitmaskB[i] == 1)
				match++;
		}
	}
	if (match == countA) {
		printf("yes!\n");
	}
	else {
		printf("no.\n");

	}
		




	delete[] sample;
	sample = nullptr;

	delete[] bitmaskA;
	bitmaskA = nullptr;

	delete[] bitmaskB;
	bitmaskB = nullptr;
}



bool isPrime(int number) { 
	for (int i = 2; i < number; i++) {
		if (number % i == 0) {
			return false;
		}
	}
	return true;
}


int main() {
	// A -> [1,10]
	// B - primes [1,11]		(2, 3, 5, 7, 11)

	// C - odd [2, 6]			(3, 5)
	// D - [1, 2]
	
	// E - [1]

	int sample[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	printArr(sample, 10);
	std::cout << std::endl;

	int A[9];
	printf("A:\n");
	for (int i = 0; i < 9; i++)
	{
		std::cin >> A[i];
		while (!(A[i] >= 1 && A[i] <= 10)) {
			printf("try again:");
			std::cin >> A[i];
		}
	}

	int B[5];
	printf("B:\n");
	for (int i = 0; i < 5; i++)
	{
		std::cin >> B[i];
		while (!isPrime(B[i])) {
			printf("try again:");
			std::cin >> B[i];
		}
	}
	


	int C[2];
	printf("C:\n");
	for (int i = 0; i < 2; i++)
	{
		std::cin >> C[i];
		while (C[i] % 2 == 0) {
			printf("try again:");
			std::cin >> C[i];
		}
	}


	int D[2];
	printf("D:\n");
	for (int i = 0; i < 2; i++)
	{
		std::cin >> D[i];
		while (!(D[i] >= 1 && D[i] <= 2)) {
			printf("try again:");
			std::cin >> D[i];
		}
	}


	int E[1];
	printf("E:\n");
	std::cin >> E[0];




	generateBitmask(A,10, B,5);
	generateBitmask(C,2, D,2);
	generateBitmask(E, 1, NULL, NULL);
	





	return 0;
}