#include <iostream>
#include <iomanip>



int main() {


	char word[6];
	char searchedWord[7];
	int n = 0;
	int rows = 0;
	int cols = 0;
	int count = 0;
	int countseq = 0;

	int initialSize = 0;
	char arrword[7];
	int diagSize = 0;

	bool isFound = false;
	int size = 7;

	// get input
	std::cin >> n;
	std::cin >> searchedWord;
	while (!(strlen(searchedWord) < size))
		std::cin >> searchedWord;



	if (n > 1 && n < 20) {
		rows = n;
		cols = n;

		char*** table = new char** [rows];
		// create table & assign each word
		{
			for (int i = 0; i < rows; i++)
			{
				table[i] = new char* [cols];

				for (int j = 0; j < cols; j++)
				{
					table[i][j] = new char[size]; // for each word to have its space

					std::cin >> word;
					while (!(strlen(word) < size))
						std::cin >> word;
					for (int k = strlen(word); k < size - 1; k++)
					{
						word[k] = 0;
					}
					for (int k = 0; k < size; k++)
					{
						table[i][j][k] = 0;
					}
					for (int k = 0; k < size - 1; k++)
					{
						table[i][j][k] = word[k];
					}

				}
			}
		}
		

		initialSize = size*cols; // word size * words

		// create 2DarrofWords arr
		char* firstArr = new char [initialSize];
		{
			for (int i = 0; i < initialSize; i++)
			{
				
				firstArr[i] = 0;
				
			}
		}


		// create secondArr arr
		char* secondArr = new char [initialSize];
		{
			for (int i = 0; i < initialSize; i++)
			{
				
				secondArr[i] = 0;
				
			}
		}


		// print whole table
		{

			for (int i = 0; i < rows; i++)
			{
				for (int j = 0; j < cols; j++)
				{
					std::cout << std::setw(3);
					for (int k = 0; k < size; k++)
					{
						std::cout << table[i][j][k];
					}
				}
				std::cout << std::endl;
			}
		}
		std::cout << std::endl; // space


		// left diagonal magic & words arr '[/]'
		int step = 0;
		int place = 0;
		int p = 0;
		{
			
			for (int r = cols-1; r >= 0, step < cols; --r)
			{

				for (int k = 0; k < size; k++) { // '\0'!

					arrword[k] = table[r][step][k];
						
				}
					
				while (arrword[p] != '\0') {
					firstArr[place] = arrword[p];
					arrword[p] = 0;
					place++;
					p++;
				}
				p = 0; // reset

				//for (int k = 0; k < size - 1; k++) {
				//	firstArr[place] = arrword[k];
				//	arrword[k] = 0; // reset
				//	place++;
				//}
				//
				//diagSize++;
				step++;
					
					
			}
			
		}

		for (int i = 0; i < initialSize; i++) { std::cout << firstArr[i] ; }
		
		
		
		

		std::cout << std::endl;
		
		place = 0;
		p = 0;
		// right diagonal magic & words arr '[\]'
		{
			
			for (int i = 0; i < cols; i++)
			{

				for (int k = 0; k < size; k++) {
					arrword[k] = table[i][i][k];
				}


				while (arrword[p] != '\0') {
					secondArr[place] = arrword[p];
					arrword[p] = 0;
					place++;
					p++;
				}
				p = 0;

				//for (int k = 0; k < size - 1; k++) {
				//	secondArr[diagSize][k] = arrword[k];
				//	arrword[k] = 0; // reset
				//}

				//diagSize++;
					
			}
			
		}

		for (int i = 0; i < initialSize; i++) { std::cout << secondArr[i]; }

		

		bool isEqual = false;
		int c = 0;
		while (firstArr[c] != '\0' && secondArr[c] != '\0') {

			if (firstArr[c] == secondArr[c])
				isEqual = true;
			else
				isEqual = false;


			c++;
		}


		if (isEqual)
			printf("\n\nStrings are equal!");
		else
			printf("\n\nStrings are different!");


		// memory management
		{

			//mm
			for (int i = 0; i < rows; i++)
			{
				for (int j = 0; j < cols; j++)
				{
					delete[] table[i][j];
					table[i][j] = nullptr;
				}
			}

			delete[] table;
			table = nullptr;
		}


	}// endif




	return 0;
}