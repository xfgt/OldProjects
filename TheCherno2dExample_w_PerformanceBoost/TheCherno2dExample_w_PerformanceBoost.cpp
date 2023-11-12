// credit: The Cherno


#include <iostream>

int main() 
{

	/*
		// slow way
		{
			// initialisaton
			int** a2d = new int* [5]; // 40 cd
			for (int i = 0; i < 5; i++)
				a2d[i] = new int[5];

			// access
			for (int y = 0; y < 5; y++)
			{
				for (int x = 0; x < 5; x++)
				{
					a2d[x][y] = 2;
				}
			}

			// deletion
			for (int i = 0; i < 5; i++)
				delete[] a2d[i];
			delete[] a2d;
		}

	*/


	// fast way (memory stored close together)
	{
		int* array = new int[5 * 5]; // 100 cd ( 25* 4[int] )
		for (int y = 0; y < 5; y++)
		{
			for (int x = 0; x < 5; x++)
			{
				array[x + y * 5] = 2; // smart af
			}
		}

		// custom delition
		
		delete[] array;
		array = nullptr;
		
		return 0;
	}

	// "I personaly avoid 2D arrays as much as possible." - The Cherno
	
}

