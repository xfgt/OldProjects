#include <iostream>
#include <fstream>
#include <string>

int main() {

	std::fstream f;
	f.open("file.txt");

	if (!f.is_open()) {
		std::cerr << "Couldn't open file!";
		return 1;
	}
	std::cout << f.tellp();
	

	
	std::string x;
	f >> x;
	std::cout << x;


	f.close();
	return 0;
}