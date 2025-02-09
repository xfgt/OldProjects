#include <iostream>

class myClass {

private:
	int a;
	std::string asf;

public:
	myClass(int la, std::string t) throw(std::exception) : a(la), asf(t) {
		std::cout << "Constructor called!\n";
		
	}

	~myClass(){
		std::cout << "Destructor called!\n";

	}

	
};


int main() {
	char a[4] = { 'h', 'e', 'l', '\0' };
	

	try {
		
		myClass obj(0, '\0');

	}
	catch (std::exception& e) {
		std::cout << "ERROR:\t" << e.what() << std::endl;
	}

	return 0;


}