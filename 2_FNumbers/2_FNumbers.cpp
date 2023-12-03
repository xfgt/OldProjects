#include <iostream>




void displayArr(std::string* a) {
	int arrSize = a->size();
	
	for (int i = 0; i < arrSize; i++)
	{
		std::cout << "[" << a[i] << "]";
	}
	
}
void addElement(std::string* arr, std::string element) {
	int arrSize = arr->size();
	arrSize++;
	arr[arrSize-(arrSize-1)] = element;

}
int main()
{
	// -1 "end"
	// 0 display array
	// 1 add element
	// 2 remove element
	// 3 edit
	// 4 find element 
	int choice = NULL;
	std::string students[] = { "\0" };
	std::string fNum;

	while (choice != -1) {
		std::cout << "Choice: ";
		std::cin >> choice;
		switch (choice) {

			case -1:
				system("cls");
				std::cout << "Bye!";
				break;

			case 0:
				std::cout << "array: ";
				displayArr(students);
				break;

			case 1 :
				std::cout << "Enter F-Number: ";
				std::cin >> fNum;
				if (fNum.size() == 7 && fNum[0] == 'F') { //F123456
					addElement(students, fNum);
					std::cout << fNum << " has been added to the array!";
					
				}
				else {
					std::cout << "Wrong number format!";
					break;
				}
				break;



			default:
				std::cout << "Invalid input!";
				break;
		}
		std::cout << std::endl;
		std::cout << std::endl;
	}
	
}
