#include <iostream>
#include <string>
int main() {

	std::string number;
	std::cin >> number;

	for (int i = 0; i < number.size(); i++) {
		std::cout << number[i] << std::endl;
	}

	return 0;
}