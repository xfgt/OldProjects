
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com


#include <iostream>


class C {
public:
	int a, b;
	C() { a = 0; b = 0; }
	C& operator+(C& ope) {
		std::cout << "+\n";
		this->a += ope.a;
		this->b += ope.b;
		return *this; //dereference the memory ( get its values)
	}
};

int main() {

	C a;
	C b;
	std::cout << a.a << std::endl << a.b << std::endl << b.a << std::endl << b.b << std::endl;

	a.a = 3;
	a.b = 4;

	b.a = 5;
	b.b = 7;

	std::cout << a.a << std::endl << a.b << std::endl << b.a << std::endl << b.b << std::endl;

	a.operator+(b);
	
	std::cout << a.a << std::endl << a.b << std::endl << b.a << std::endl << b.b << std::endl;



	b + a; // the same

	std::cout << a.a << std::endl << a.b << std::endl << b.a << std::endl << b.b << std::endl;
	return 0;
}