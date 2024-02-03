
#include <iostream>

int main()
{
	std::string input = "";
	std::cin >> input;

	std::string reversed = "";

	for (int i = input.size(); i >= 0; i--)
	{
		reversed += input[i];
	}

	std::cout << reversed;
}
