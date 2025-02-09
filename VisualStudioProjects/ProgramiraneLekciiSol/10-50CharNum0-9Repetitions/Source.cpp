#include <iostream>


int getMaxArr(int* arr, int arrSize) {
	int maxValue = arr[0];
	for (int i = 0; i < arrSize; i++) {
		if (maxValue < arr[i])
			maxValue = arr[i];

	}
	return maxValue;
}

int main() {


	char number[50];
	std::cin.getline(number, 50);
	while(strlen(number) < 10)
		std::cin.getline(number, 50);
	


	int count_Zero = 0;
	int count_One = 0;
	int count_Two = 0;
	int count_Three = 0;
	int count_Four = 0;
	int count_Five = 0;
	int count_Six = 0;
	int count_Seven = 0;
	int count_Eight = 0;
	int count_Nine = 0;

	
	for (int i = 0; i < strlen(number); i++)
	{
		switch (number[i]) {
		case '0':
			count_Zero++;
			break;
		case '1':
			count_One++;
			break;
		case '2':
			count_Two++;
			break;
		case '3':
			count_Three++;
			break;
		case '4':
			count_Four++;
			break;
		case '5':
			count_Five++;
			break;
		case '6':
			count_Six++;
			break;
		case '7':
			count_Seven++;
			break;
		case '8':
			count_Eight++;
			break;
		case '9':
			count_Nine++;
			break;
		}
	}
	int reps[10] = {count_Zero, count_One, count_Two, count_Three, count_Four, count_Five, count_Six, count_Seven, count_Eight, count_Nine};
	std::cout << "numb: ";
	for (int i = 0; i < 10; i++)
	{
		std::cout << i << " ";
	}
	std::cout << std::endl << "reps: ";
	for (int i = 0; i < 10; i++)
	{
		std::cout << reps[i] << " ";
	}

	int max = getMaxArr(reps, 10);
	int numberMaxHolder = 0;
	for (int i = 0; i < 10; i++)
	{
		if (reps[i] == max) {
			numberMaxHolder = i;
			break;
		}
	}
	printf("\nmax reps: %d of the number %d\n", max, numberMaxHolder);

	return 0;
}