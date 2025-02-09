#include <iostream>


void addStudent(char** table, int tableSize, int position, char* fNumber);
int getPosOfNum(char** table, int tableSize, char* fNumber);
void deleteStudent(char** table, int tableSize, char* fNumber);
void changeStudentNumber(char** table, int tableSize, char* fNumber);
void searchStudentNumber(char** table, int tableSize, char* fNumber);
void showTable(char** table, int tableSize);

int main()
{
	int tableSize = 10;
	char fNumber[8] = { "F113621" }; // F, 1, 1, 3, 6, 2, 1, '\0'

	//	create the arr of fnums
	char** fNumberList = new char*[tableSize];
	for (int i = 0; i < tableSize; i++)
	{
		fNumberList[i] = new char[8];
		for (int j = 0; j < 8; j++)
		{
			fNumberList[i][j] = 0;
		}

	}

	char command = '\0';
	
	while (command != 'x') {
		printf("\nEnter command or enter \"x\" to exit: ");
		std::cin >> command;
		switch (command)
		{
		case 't': // showtable
			showTable(fNumberList, tableSize);
			break;
		case 'a': // add
			printf("enter a position: ");
			int n;
			std::cin >> n;
			showTable(fNumberList, tableSize);
			addStudent(fNumberList, tableSize, n, fNumber);
			break;
		case 'd': // delete
			deleteStudent(fNumberList, tableSize, fNumber);
			break;
		case 'c': // change
			changeStudentNumber(fNumberList, tableSize, fNumber);
			break;
		case 's': // search
			searchStudentNumber(fNumberList, tableSize, fNumber);
			break;

		default:
			printf("Entered command unknown.");
			break;
			
		
		}
	}





	// Memory management
	for (int i = 0; i < tableSize; i++)
	{
		delete[] fNumberList[i];
		fNumberList[i] = nullptr;
	}
	delete[] fNumberList;
	fNumberList = nullptr;



	return 0;
}


void addStudent(char** table, int tableSize, int position, char* fNumber) {

	if (position < tableSize) { //if asked position is in range
		std::cout << "\nnew student F-number: ";
		std::cin >> fNumber;
		while (!(fNumber[0] == 'F' && strlen(fNumber) == 7)) {
			std::cout << "\nEnter correct student F-number: ";
			std::cin >> fNumber;
		}
		int f = 0;
		bool haveEqual = false;
		while (f < tableSize) {
			if (strcmp(fNumber, table[f]) == 1) { // if numbers are different
				f++;
			}
			else {
				printf("\"%s\" is already in the table!", fNumber);
				haveEqual = true;
				break;
			}


		}
		if (haveEqual)
			return;

		if ((fNumber[0] == 'F' && strlen(fNumber) == 7))
		{
			if (table[position][0] == '\0') { // if position is blank
				for (int j = 0; j < 8; j++)
				{
					table[position][j] = fNumber[j];
				}
			}
			else { // if position is not empty
				int i = 0;
				while (i < tableSize) {

					if (table[i][0] == '\0') { // we assign it where there is an empty position
						for (int j = 0; j < 8; j++)
						{
							table[i][j] = fNumber[j];
						}
						break;
					}

					i++;
				}
			}


		}
		else {
			printf("\"%s\" is an invalid F-number!\n", fNumber);
		}
	}
	else {
		std::cout << "\nposition out of range!\n" << std::endl;
	}


	showTable(table, tableSize);
}
int getPosOfNum(char** table, int tableSize, char* fNumber) {
	int i = 0;
	int position = 0;
	while (i < tableSize) {
		if (strcmp(fNumber, table[i]) == 0) {
			position = i;
			return position;
		}
		i++;
	}

	printf("\nStudent number not found!\n");
	showTable(table, tableSize);
	return -1;
}
void deleteStudent(char** table, int tableSize, char* fNumber) {
	std::cout << "\nstudent F-number to delete: ";
	std::cin >> fNumber;
	while (!(fNumber[0] == 'F' && strlen(fNumber) == 7)) {
		std::cout << "\nEnter correct student F-number: ";
		std::cin >> fNumber;
	}
	// get position
	int position = getPosOfNum(table, tableSize, fNumber);
	// assign 0
	if (position != -1) {
		for (int i = 0; i < 8; i++)
		{
			table[position][i] = 0;
		}
		printf("\nnumber \"%s\" successfully deleted!", fNumber);
	}
	else {
		printf("\nCannot delete a non-existing student number!");
	}
	showTable(table, tableSize);
}


void changeStudentNumber(char** table, int tableSize, char* fNumber) {
	std::cout << "\nstudent F-number to change: ";
	std::cin >> fNumber;
	while (!(fNumber[0] == 'F' && strlen(fNumber) == 7)) {
		std::cout << "\nEnter correct student F-number: ";
		std::cin >> fNumber;
	}
	bool isFound = false;
	int i = 0;
	while (i < tableSize) {

		if (strcmp(fNumber, table[i]) == 0) { // we assign it where there is an empty position
			isFound = true;
		}

		i++;
	}

	if (isFound) {
		// get position
		int position = getPosOfNum(table, tableSize, fNumber);
		char* oldNumber = new char[8];
		for (int i = 0; i < 8; i++)
		{
			oldNumber[i] = fNumber[i];

		}

		printf("Enter the new F-number for \"%s\": ", fNumber);
		std::cin >> fNumber;
		while (!(fNumber[0] == 'F' && strlen(fNumber) == 7)) {
			std::cout << "\nEnter correct student F-number: ";
			std::cin >> fNumber;
		}

		// assign 0
		if (position != -1) {
			for (int i = 0; i < 8; i++)
			{
				table[position][i] = fNumber[i];
			}
			printf("\nNumber \"%s\" successfully changed to \"%s\"!", oldNumber, fNumber); //?
			oldNumber = nullptr;
		}
		else {
			printf("\nCannot change a non-existing student number!");
		}
	}
	else {
		printf("\"%s\" could not be found in the table!", fNumber);
	}


	showTable(table, tableSize);
}

void searchStudentNumber(char** table, int tableSize, char* fNumber) {
	printf("Enter F-number to search for: ");
	std::cin >> fNumber;
	while (!(fNumber[0] == 'F' && strlen(fNumber) == 7)) {
		std::cout << "\nEnter correct student F-number: ";
		std::cin >> fNumber;
	}
	int i = 0;
	int position = 0;
	bool isFound = false;
	while (i < tableSize) {
		if (strcmp(fNumber, table[i]) == 0) {
			position = i;
			isFound = true;
			break;
		}
		i++;
	}
	if (isFound)
		printf("\nStudent number \"%s\" found at position %d!\n", fNumber, position);
	else
		printf("\nStudent number not found!\n");
	showTable(table, tableSize);
}


void showTable(char** table, int tableSize) {
	std::cout << "\nTABLE" << std::endl;
	for (int i = 0; i < tableSize; i++)
	{
		printf("[%s] ", table[i]);
	}
	std::cout << std::endl;

}