    
#include <iostream>


int** combinationsArr(int* arr, int arrSize, int firstIndex, int lastIndex) { // n = 3;

	int** valuesArr = new int*[10]; //temp valuesArr for nums
	for (int i = 0; i < 10; i++)
	{
		valuesArr[i] = new int[3]; // each row has 3 places for data
		for (int g = 0; g < 3; g++)
		{
			valuesArr[i][g] = 0;
		}
	}

	int a = arr[firstIndex];
	int b = arr[firstIndex+1];
	int c = arr[firstIndex+2];

	int cnt = 0;
	int row = 0;
	while (a <= arr[lastIndex]) {
		
		if (c <= arrSize) {
			for (int i = b; i < arrSize; i++)
			{
				valuesArr[row][cnt] = a;
				valuesArr[row][cnt+1] = b;
				//std::cout << inputArr << b << arr[i] << std::endl;
				valuesArr[row][cnt+2] = arr[i];
				//for (int f = cnt; f < cnt+3; f++) // you can print valuesArr
				//{
				//	std::cout << valuesArr[f];
				//}
				//std::cout << std::endl;
				
				row++;
			}
			b=c;
			c++;
		}
		else {
			c--;
		}
		
		if (b == c) {
			a++;
			b = a + 1;
			c = b + 1;
			
		}
	}


	return valuesArr; // the ready 2D array of arrays
}


void swap(int& x, int& y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}

void permute(int* inputArr, int firstIndex, int lastIndex)
{
	if (firstIndex == lastIndex) {
		
		for (unsigned j = 0; j <= lastIndex; j++) {
			std::cout << inputArr[j];
		}
		std::cout << std::endl;

		
	}
	else
	{
		for (int i = firstIndex; i <= lastIndex; i++)
		{
			swap(inputArr[firstIndex], inputArr[i]); 
			permute(inputArr, firstIndex + 1, lastIndex); 
			swap(inputArr[firstIndex], inputArr[i]);
			
		}
	}
}



int main()
{
	
	int arr[] = { 1, 2, 3, 4, 5 };
//   *indexes = { 0, 1, 2, 3, 4 };
	
	int arr_size = sizeof(arr) / sizeof(arr[0]);

	
	int** nums = new int*[10]; // create and assign 0-es to 2darr
	for (int i = 0; i < 10; i++)
	{
		nums[i] = new int[3];
		for (int j = 0; j < 3; j++)
		{
			nums[i][j] = 0;
		}
	}

	nums = combinationsArr(arr, arr_size, 0, 2); // assign func arr to this "nums" arr.
	
	int* eachRow = new int[3];


	for (int i = 0; i < 10; i++) // output
	{
		for (int x = 0; x < 3; x++)
		{
			eachRow[x] = nums[i][x];
		}
		permute(eachRow, 0, 2);
	}


	

	for (int i = 0; i < 10; ++i) // memory management
	{
		delete[] nums[i];
		nums[i] = nullptr;
	}

	delete nums;
	nums = nullptr;
	return 0;
}
