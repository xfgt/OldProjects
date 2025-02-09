#include <iostream>

void getTriangleOfLetters(int size) {

	int iSecret;
	srand(time(NULL));
	srand(rand());
	srand(rand());


	for (int i = 1; i <= size-1; i++)
	{
		 
		for (int j = 0; j < i; j++)
		{
			iSecret = rand() % (90 + 1 - (65)) + 65; // set limits to random number;
			std::cout << (char)iSecret;
		}
		std::cout << std::endl;
	}



}

int main() {

	char letter;
	std::cin >> letter;

	if (letter >= 'A' && letter <= 'Z') {
		int count = 0;
		for (int i = 65; i <= (int)letter; i++)
			count++;
		
		getTriangleOfLetters(count);
		for (int j = 65; j <= (int)letter; j++)
		{
			std::cout << ((char)j);
		}
	}
	return 0;
}