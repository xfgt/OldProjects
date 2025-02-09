#include <iostream>
#include <clocale>

#include "person.h"


int main() {

	setlocale(0, ""); // кирилица
	/*Person x("MisterX", 185, 67);
	x.prn();

	Person* y = new Person("YYYY", 234, 123);
	y->prn();*/

	char b[10];
	char names[10][80]; //5 names with 80 chars of lenght
	Person* P[10];

	int current = 0;
	int min = 0;

	const char* pA = nullptr;
	const char* pB = nullptr; // object holders

	int ext = 0;
	for (int f = 0; f < 10; f+=2)
	{
		int H, W;
		std::cout << "Enter data for 2 people:\n";
		for (int i = 0; i < 2; i++)
		{
			std::cout << "Enter name:"; std::cin.getline(&names[ext][0], 79); // get address of current row and enter the name with lenght < 79 chars
			
			std::cout << "Enter height:"; std::cin >> H;
			std::cout << "Enter weight:"; std::cin >> W;

			P[ext] = new Person(const_cast<char*>(&names[ext][0]), H, W); // " (&names[i][0]), H, W " parameters of the function 'Person'; 'const_cast<char*>' is conversion to <the type>
			std::cin.getline(b, 9); // reset cin?
			ext++;
		}
		current = theFunction(P[f], P[f + 1]); 
		if (current < min) {
			min = current;
			pA = P[f]->getName();
			pB = P[f+1]->getName();
			
		}
		if(min == 0){
			min = current;
		}
		printf("[min: %d]; \"%s\", \"%s\" [their: %d];\n", min, P[f]->getName(), P[f+1]->getName(), current);
	}
		printf("[min: %d] for \"%s\", \"%s\"\n", min, pA, pB);
	
	

	


	// print table
	//for (int i = 0; i < 2; i++)
	//	P[i]->prn(); //pointerValue.prn()
	


	return 0;
}