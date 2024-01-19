#include <iostream>

int main()
{
	int n;

	std::cin >> n;

	std::string nWord = "";

	if (n >= 0 && n <= 9){
		switch (n)
		{
		case 0:
			nWord = "Zero";
			break;

		case 1:
			nWord = "One";
			break;

		case 2:
			nWord = "Two";
			break;

		case 3:
			nWord = "Three";
			break;

		case 4:
			nWord = "Four";
			break;

		case 5:
			nWord = "Five";
			break;

		case 6:
			nWord = "Six";
			break;

		case 7:
			nWord = "Seven";
			break;

		case 8:
			nWord = "Eight";
			break;

		case 9:
			nWord = "Nine";
			break;

		}
	}

	std::cout << nWord;
}
