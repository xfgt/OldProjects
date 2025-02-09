
/*** ТЕОРИЯ ***/

/// Задача 1, 2
//#include <iostream>
//#include <stdexcept>
//int main() {
//
//	try
//	{
//		//throw std::runtime_error("Network failure");
//		//throw "Network faliure const char* error";
//		//throw 5;
//	}
//	catch (const std::runtime_error& re)
//	{
//		std::cout << re.what();
//	}
//	catch (const const char* str)
//	{
//		std::cout << str;
//	}
//	catch (const int code)
//	{
//		return code;
//	}
//
//
//
//	return 0;
//}


/// Задача 3

//#include <iostream>
//#include <stdexcept>
//
//int main() {
//
//	try {
//		//throw std::logic_error("logic_error");
//		//throw std::runtime_error("ListError / runtime_error");
//		throw std::exception("sample exception");
//	}
//	catch (const std::logic_error& le) {
//		std::cout << le.what();
//	}
//	catch (const std::runtime_error& re) {
//		std::cout << re.what();
//	}
//	catch (...) {
//		std::cout << "Different exception got caught!";
//	}
//
//	return 0;
//}



/// Задача 4, 5, 6, 7

/*
* Задача 4:
	void f(){
      List a;
      List* b = new List();
      throw runtime_error("");
    }

    След изпълнение на кода във функцията 'f()' новата памет заделена за 'b' не се изтрива.


Задача 5:
    'f()' е функция без връщащ тип на резултат.
    'void f() throw();' е функция с върщащ тип 'void' резултат, който може да бъде обработен от catch конструкция;



Задача 6:
Как ще се дефинира функция...

която изхвърля само bad_alloc изключения? 
    void f() throw (std::bad_alloc) {}

А функция, която не изхвърля изключения?
    void f(){}

А функция, която може да изхвърля изключения от какъв да е тип?
    void f() throw(std::exception){}



Задача 7:
Какво ще се случи ако изхвърлите изключение, което никога не се прихваща?
    Програмата ни няма да може да бъде изпълнена успешно.

Какво ще се случи, ако изхвърлите изключение което води до специфициране на изключение?
    Ще получим като резултат от обработката на изключението неогвата спецификация.

*/


/*** УПРАЖНЕНИЯ ***/

class Student {
public:
	Student(); //конструктор по подразибране
	Student(char*, double); //конструктор с параметри
	void read() throw(); //мутатор
	void setName(char* name);
	void setGrade(double grade);
	bool is_better_than(Student& s); //аксесор
	void print() const;
	char* getName() const;
	double getGrade() const;
private:
	char* name;
	double grade;
};


void check(Student&, Student&);
void getBest(Student*, int);
void readArrayStudents(Student*, int);

//main.cpp
#include <iostream>
#include <windows.h>

using namespace std;

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	
	

	
	try {
		Student s[6];

		readArrayStudents(s, 6);
		

		getBest(s, 6);
		
		
	}
	catch ( const std::bad_alloc& ba) { // n
		cout << "ERROR! [" << ba.what() << "]" << std::endl;
	}
	catch (const logic_error& grd) {
		cout << "ERROR! [" << grd.what() << "]"  << std::endl;
	}

	
	
	return 0;
}


Student::Student() {
	name = new char[2];
	//name = " "; грешно
	strcpy_s(name, 2, " ");
	grade = 2;
}

Student::Student(char* n, double g) {
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	if (g >= 2 && g <= 6) grade = g;
	else if (g < 2) grade = 2;
	else grade = 6;
}

void Student::read() throw (bad_alloc, logic_error){
	const int n = 5; // max characters
	int badName = 0;
	int badGrade = 0;

	std::cout << "Въведете име на студент: ";
	name = new char[n+3]; // n + 3
	cin.getline(name, n+2); // n + 2
	while (strlen(name) == n+1) { // n + 1
		badName++;
		delete[] name;
		name = NULL;
		std::cout << "(" << badName << ") опит, Моля въведете името отново: ";
		name = new char[n + 3]; // n + 3
		cin.getline(name, n + 2); // не чете втори път
		if (badName == 3) {
			delete[] name;
			name = NULL;
			throw bad_alloc();
		}
		
	}
	
		
	std::cout << "Въведете успех на студент: ";
	std::cin >> grade;
	while (grade < 2 || grade > 6) {
		badGrade++;
		std::cout << "(" << badGrade << ") опит, Моля въведете оценката отново: ";
		std::cin >> grade;

		if(badGrade == 3)
			throw logic_error("bad_grade");

	}
	cin.ignore(); // задължително
}

void Student::setName(char* n) {
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}

void Student::setGrade(double g) {
	if (g >= 2 && g <= 6) grade = g;
	else if (g < 2) grade = 2;
	else grade = 6;
}

bool Student::is_better_than(Student& s) {
	if (this->grade > s.grade) return true;
	return false;
}

void Student::print() const {
	std::cout << "Име на студент: " << name << std::endl;
	std::cout << "Среден успех на студент: " << grade << std::endl;
}

char* Student::getName() const {
	return name;
}

double Student::getGrade() const {
	return grade;
}


void check(Student& obj1, Student& obj2) {
	cout << "По-добър стъдент ли е " << obj1.getName() << " от " << obj2.getName() << "? " << boolalpha << obj1.is_better_than(obj2) << endl << endl;
}

void getBest(Student* s, int arrSize) {
	double lastBestGrade = 0.0;
	double bestGrade = 0.0;
	char* bestName = nullptr;

	for (int i = 0; i < arrSize; i++) {
		lastBestGrade = s[i].getGrade();

		if (bestGrade < lastBestGrade) {
			bestGrade = lastBestGrade;
			bestName = s[i].getName();
		}
	}

	std::cout << "Най-добрият от всички е " << bestName << " с успех " << bestGrade << ".";

	delete[] bestName;
	bestName = NULL;
}

void readArrayStudents(Student* s, int arrSize) {
	for (int i = 0; i < arrSize; i++)
	{
		s[i].read();
		if (i != 0 && i % 2 == 1) {
			check(s[i], s[i - 1]);
		}
	}
}
