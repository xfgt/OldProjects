
/*** ������ ***/

/// ������ 1, 2
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


/// ������ 3

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



/// ������ 4, 5, 6, 7

/*
* ������ 4:
	void f(){
      List a;
      List* b = new List();
      throw runtime_error("");
    }

    ���� ���������� �� ���� ��� ��������� 'f()' ������ ����� �������� �� 'b' �� �� �������.


������ 5:
    'f()' � ������� ��� ������ ��� �� ��������.
    'void f() throw();' � ������� � ������ ��� 'void' ��������, ����� ���� �� ���� ��������� �� catch �����������;



������ 6:
��� �� �� �������� �������...

����� �������� ���� bad_alloc ����������? 
    void f() throw (std::bad_alloc) {}

� �������, ����� �� �������� ����������?
    void f(){}

� �������, ����� ���� �� �������� ���������� �� ����� �� � ���?
    void f() throw(std::exception){}



������ 7:
����� �� �� ����� ��� ���������� ����������, ����� ������ �� �� ��������?
    ���������� �� ���� �� ���� �� ���� ��������� �������.

����� �� �� �����, ��� ���������� ���������� ����� ���� �� ������������� �� ����������?
    �� ������� ���� �������� �� ����������� �� ������������ �������� ������������.

*/


/*** ���������� ***/

class Student {
public:
	Student(); //����������� �� ������������
	Student(char*, double); //����������� � ���������
	void read() throw(); //�������
	void setName(char* name);
	void setGrade(double grade);
	bool is_better_than(Student& s); //�������
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
	//name = " "; ������
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

	std::cout << "�������� ��� �� �������: ";
	name = new char[n+3]; // n + 3
	cin.getline(name, n+2); // n + 2
	while (strlen(name) == n+1) { // n + 1
		badName++;
		delete[] name;
		name = NULL;
		std::cout << "(" << badName << ") ����, ���� �������� ����� ������: ";
		name = new char[n + 3]; // n + 3
		cin.getline(name, n + 2); // �� ���� ����� ���
		if (badName == 3) {
			delete[] name;
			name = NULL;
			throw bad_alloc();
		}
		
	}
	
		
	std::cout << "�������� ����� �� �������: ";
	std::cin >> grade;
	while (grade < 2 || grade > 6) {
		badGrade++;
		std::cout << "(" << badGrade << ") ����, ���� �������� �������� ������: ";
		std::cin >> grade;

		if(badGrade == 3)
			throw logic_error("bad_grade");

	}
	cin.ignore(); // ������������
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
	std::cout << "��� �� �������: " << name << std::endl;
	std::cout << "������ ����� �� �������: " << grade << std::endl;
}

char* Student::getName() const {
	return name;
}

double Student::getGrade() const {
	return grade;
}


void check(Student& obj1, Student& obj2) {
	cout << "��-����� ������� �� � " << obj1.getName() << " �� " << obj2.getName() << "? " << boolalpha << obj1.is_better_than(obj2) << endl << endl;
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

	std::cout << "���-������� �� ������ � " << bestName << " � ����� " << bestGrade << ".";

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
