#include <iostream>
#include "Student.h"


int main() {
	int myGrades[3];


	myGrades[0] = 2;
	myGrades[1] = 5;
	myGrades[2] = 4;

	Student student1("Georgi", "F123456", myGrades);
	Student s2;

	std::cout << student1 << std::endl;

	std::cout << std::endl;

	std::cin >> s2;
	std::cout << s2;

	std::cin.get();
	return 0;
}