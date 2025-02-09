#include "Student.h"

Student::Student() {
	this->name = new char[2];
	strcpy_s(this->name, 2, " ");
	this->fNumber = new char[2];
	strcpy_s(this->fNumber, 2, " ");

	for (int i = 0; i < 3; i++) {
		grade[i] = 0;
	}
}Student::Student(const char* name, const char* fNumber, int grade[3]) {
	this->name = new char[strlen(name)];
	strcpy_s(this->name, strlen(name) + 1, name);
	this->fNumber = new char(strlen(fNumber));
	strcpy_s(this->fNumber, strlen(fNumber) + 1, fNumber);

	for (int i = 0; i < 3; i++) {
		this->grade[i] = grade[i];
	}
}

Student::Student(const Student& rhs) {
	this->setName(rhs.name);
	this->setFNumber(rhs.fNumber);
	this->setGrade(rhs.grade);
}
Student::~Student() {
	delete[] this->name;
	delete[] this->fNumber;
}

char* Student::getName() const {
	return this->name;
}
char* Student::getFNumber() const {
	return this->fNumber;
}
const int* Student::getGrade() const {
	return this->grade;
}

void Student::setName(const char* name) {
	delete[] this->name;

	this->name = new char[strlen(name)];
	strcpy_s(this->name, strlen(name) + 1, name);
}
void Student::setFNumber(const char* fNumber) {
	delete[] this->fNumber;

	this->fNumber = new char(strlen(fNumber));
	strcpy_s(this->fNumber, strlen(fNumber) + 1, fNumber);
}
void Student::setGrade(const int* grade) {
	for (int i = 0; i < 3; i++) {
		this->grade[i] = grade[i];
	}
}

bool Student::operator=(const Student& rhs) {
	this->setName(rhs.name);
	this->setFNumber(rhs.fNumber);
	this->setGrade(rhs.grade);

	return true;
}

//Student& operator+(const Student& lhs, const Student& rhs) {
//	/*int grade[3];
//	for (int i = 0; i < 3; i++) {
//		grade[i] = lhs.grade[i];
//	}
//
//	return Student(lhs.name, lhs.fNumber, )*/
//}

ostream& operator<<(ostream& os, const Student& rhs) {
	os << "Ime: " << rhs.name << endl << "Fak. nomer: " << rhs.fNumber << endl;
	return os;
}

istream& operator>>(istream& is, Student& rhs) {
	char buffer[100];
	is.getline(buffer, 100);

	delete[] rhs.name;
	rhs.name = new char[strlen(buffer) + 1];
	strcpy_s(rhs.name, strlen(buffer) + 1, buffer);

	char buffer2[100];
	is.getline(buffer2, 100);

	delete[] rhs.fNumber;
	rhs.fNumber = new char[strlen(buffer2) + 1];
	strcpy_s(rhs.fNumber, strlen(buffer2) + 1, buffer2);

	for (int i = 0; i < 3; i++) {
		is >> rhs.grade[i];
	}

	return is;
}
