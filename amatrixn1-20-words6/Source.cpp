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
					for (int k = strlen(word); k < size-1; k++)
					{
						word[k] = 0;
					}
					for (int k = 0; k < size; k++)
					{
						table[i][j][k] = 0;
					}
					for (int k = 0; k < size-1; k++)
					{
						table[i][j][k] = word[k];
					}

				}
			}
		}
		for (int i = 0; i < size-1; i++)
		{
			word[i] = 0;
		}
		
		initialSize = (cols * rows) - cols;
		char** arrOfWords = new char* [initialSize]; // words count
		// create 2DarrofWords arr
		{
			for (int i = 0; i < initialSize; i++)
			{
				arrOfWords[i] = new char[size]; // size of each word

				for (int j = 0; j < size; j++)
				{
					arrOfWords[i][j] = 0;
				}
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


		// diagonal magic & words arr
		{
			while (diagSize < initialSize) {
				for (int i = 0; i < cols; i++)
				{
					for (int j = 0; j < rows - i; j++) {

						std::cout << std::setw(3);
						for (int k = 0; k < size-1; k++) {
							std::cout << table[i][j][k];
							arrword[k] = table[i][j][k];
						}
						for (int k = 0; k < size-1; k++) {
							arrOfWords[diagSize][k] = arrword[k];
							arrword[k] = 0; // reset
						}
						diagSize++;
					}
					std::cout << std::endl;
				}
			}
		}

	
		std::cout << std::endl; // space
		
		int a = 0;


		//check words if matches with searched
		{

			std::cout << "words to search trough: ";
			for (int i = 0; i < initialSize; i++)
			{
				std::cout << arrOfWords[i] << " ";
			}
			std::cout << std::endl;

			for (int i = 0; i < initialSize; i++)
			{
				
					
				while (arrOfWords[i][a] != '\0') {

					if (arrOfWords[i][a] == searchedWord[a])
						isFound = true;
					else
						isFound = false;
					a++;
				}
				a = 0;
				if (isFound)
					break;

			}

			if (isFound)
				printf("\n\n\"%s\" is IN top left corner!\n\n", searchedWord);
			else
				printf("\n\n\"%s\" is NOT in top left corner.\n\n", searchedWord);
		}


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