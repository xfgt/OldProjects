#include <iostream>


int main() {

	char A[10] = { "commerce" };
	std::cin >> A;
	char B[10] = { "lambde" };
	std::cin >> B;

	int A_size = strlen(A);
	int B_size = strlen(B);

	int smaller = 0;
	int larger = 0;
	char letter;

	(A_size < B_size) ? smaller = A_size, larger = B_size : smaller = B_size, larger = A_size;
	
	char* p_largerArr = NULL;
	char* p_smallerArr = NULL;

	(B_size > strlen(A)) ? p_largerArr = B, p_smallerArr = A : p_largerArr = A, p_smallerArr = B;

	int i = 0;
	while (i < smaller) {
		letter = p_smallerArr[i];
		for (int j = 0; j < larger; j++)
		{
			if (letter == p_largerArr[j]) 
				std::cout << letter << std::endl;
				
		}
		i++;
	}
	p_largerArr = nullptr;
	p_smallerArr = nullptr;

	return 0;
}