
#include <iostream>

int main()
{
	int randN;
	srand(time(NULL));
	srand(rand());
	srand(rand());

	//iSecret = rand() % (122 + 1 - (-12)) + (-12); [122max] [-12 min]

	int n = 0;
	int num = 0;
	std::cin >> n;



	if (n > 1 && n < 100) {
		int* arr = new int[n];
		for (int i = 0; i < n; i++)
			arr[i] = NULL;

		for (int i = 0; i < n; i++)
		{
			std::cin >> num;
			arr[i] = num;

		}

		std::cout << "Reverse: ";
		for (int i = n - 1; i >= 0; --i)
		{
			std::cout << arr[i] << " ";
		}

		std::cout << "\nodd indexes: ";
		for (int i = 0; i < n; i++)
		{
			if (i != 0 && i % 2 == 1)
				if (i % 3 == 1) {
					std::cout << arr[i] << " ";
				}
				else if (i % 3 != 1) {
					std::cout << arr[i] << " ";
				}


		}

		std::cout << "\neven indexes: ";
		for (int i = 0; i < n; i++)
		{
			if (i % 2 == 0)
				std::cout << arr[i] << " ";
		}

		std::cout << "\nrandom indexes in range: ";
		
		int* indexes = new int[n];
		for (int i = 0; i < n; i++)
			indexes[i] = NULL;

		int lastI = 0;
		for (int i = 0; i < n; i++)
		{
			
			
			randN = rand() % (n + 1 - i) + i;
			
			if (randN < n) {
				if (lastI = randN) {
					randN = 0;
					randN = rand() % (n + 1 - i) + i;
					lastI = randN;
					indexes[i] = lastI;
				}
				else {
					lastI = randN;
					indexes[i] = lastI;

				}
			}
			
			
			

			
	
			
		}
		for (int i = 0; i < n; i++)
		{
			std::cout << indexes[i] << "[";
		}
		std::cout << std::endl;
		for (int j = 0; j < n; j++)
		{
			
			std::cout << arr[indexes[j]] << " ";
			
			
		}
		

	}
}
