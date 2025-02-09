#include <iostream>
#include <cstring>


int main() {


	//std::string a = "asdfg";
	//std::string b = "jusshfm";

	//a += b; // string concatenation

	//std::cout << a << std::endl;



	//char word[50] = "abc";
	//char word2[4] = "gfk";

	////char concatenation
	//strcat_s(word, word2); // cstring

	//std::cout << word << std::endl;

	
	


	// searching substrings

	const char* str3 = "Hello world!!!";
	const char* search = "world";

	const char* result = strstr(str3, search);
	std::cout << result << std::endl;
	std::cout << result - str3 << std::endl; // get index

	



	//std::string name = "tedi";
	//const char* name1 = name.c_str();

	//

	//size_t result = name.find("iy"); // razmera koito poluchavame shte bude razlichen razmer
	//size_t result2 = name.find("o");

	//std::cout << result2; // number

	//if (result2 == std::string::npos) // nullposition (-1)
	//	std::cout << std::endl << "not found" << std::endl;

	//std::string text = "abcdef";
	//std::cout << text.substr(1, 2); // starts from index 1 and gets nex two elements


	//text.erase(1, 2);

	//std::cout << std::endl<< text;



	////replace

	//text.replace(1, 2, "replaced");

	//std::cout << std::endl << text;

	return 0;
}