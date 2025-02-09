// 3-charArr.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	char c1[5] = { 'a','b','c' };
	std::cout << c1 << std::endl;
	char a[5] = "asfg";
	std::cout << a << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << a[i] << " = " << int(a[i]) << std::endl;
		if (a[i] == '\0') {
			std::cout << "\'\\0\' is hit" << std::endl;
		}
	}
	std::cout << std::endl;
	char s[10];
	char m[10];
	std::cin.getline(s, 10, 'a'); // s gets data until we hit the size of argument2 or meet third argument <char>
	
	std::cout << "\ts:\n" << s << '\n';

	std::cout << "strlen: " << strlen(s); // <argument 2> - 1
	
	//strcat.. 










	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
