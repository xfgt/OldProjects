//1 2 3 4 5 6		12
//3 5 7 9			0
//2 4 6 8 10		30
//12345678910


#include <iostream>
#include <string>

int main() {
	std::string input;
	std::getline(std::cin,input);
	int inputLenght = input.size();

	char inputArr [100];

	int i = 0;
	int sum = 0;
	int inputInt = 0;
	
	while (input[i] != '\0') {
		if (input[i] == ' ' && input[i+1] != ' ' && input[i+2] != ' ') {
			std::cout << input[i] << input[i+1] << input[i+2] << std::endl; // TODO '1' + '0' -> 10 string to int
			sum += input[i + 1] + input[i + 2];
			std::cout << sum << std::endl;

		}
		else
		{
			if (input[i] != ' ') {
				inputInt = input[i] - '0';
				std::cout << inputInt << std::endl;
				sum += inputInt;
			}
		}
		i++;
	}
	

	std::cout << sum << std::endl;
	
	

	
	
}