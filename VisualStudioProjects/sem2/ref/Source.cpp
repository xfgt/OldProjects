// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com


#include <iostream>



// * -> return address; & -> return refference
int sum(int& a, int& b) { // (arguments) if we use & it will work with the same address

	int result = a + b;

	std::cout << &a << std::endl;
	std::cout << &b << std::endl;
	



	return result;
}

int main() {
	std::cout << "MAIN" << std::endl;
	int a, b;

	a = 5;
	b = 4;
	int* address_holder = sum(a, b);
	std::cout << &a << std::endl;
	std::cout << &b << std::endl << std::endl;
	std::cout << *address_holder << std::endl;

	return 0;
}