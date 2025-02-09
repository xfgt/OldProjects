#include "Student.h"



Student::Student(){

	this->name = new char[2];
	strcpy_s(this->name, 2, "");

	this->fNumber = new char[2];
	strcpy_s(this->fNumber, 2, "");


	for (int i = 0; i < 2; i++)
	{
		this->grades[i] = grades[i];
	}

}
Student::Student(const char* localName, const char* localFN, int localGrades[3]) {


	this->name = new char[strlen(localName) + 1];
	strcpy_s(this->name, strlen(localName)+1, localName);


	this->fNumber = new char[strlen(localFN) + 1];
	strcpy_s(this->fNumber, strlen (localFN)+1, localFN);

	for (int i = 0; i < 3; i++)
	{
		this->grades[i] = localGrades[i];
	}
}

char* Student::getName() const {
	return name;
}

char* Student::getFNumber() const {
	return fNumber;
}

const int* Student::getGrades() const {
	return grades ;
}


void Student::setName(const char* lname) {
	delete[] this->name;
	this->name = new char[2];
	strcpy_s(this->name, 2, "");

}


void Student::setFNumber(const char* lFNumber){
	delete[] this->fNumber;
	this->fNumber = new char[2];
	strcpy_s(this->fNumber, 2, "");
}

void Student::setGrades(int* g) {
	for (int i = 0; i < 2; i++)
	{
		this->grades[i] = g[i];
	}
}




Student::~Student() {
	delete[] name;
	delete[] fNumber;
}

std::ostream& operator<<(std::ostream& os, Student& obj) {
	os << obj.getFNumber() << ", " <<  obj.getName() << ", " << obj.getGrades() << std::endl;

	return os;
}


std::istream& operator>>(std::istream& in, Student& obj) {
	
	delete[] obj.grades;

	
	char* name;
	char* fNumber;
	int grades[3];

	in >> name >> fNumber;

	for (int i = 0; i < 3; i++)
	{
		in >> grades[i];
	}

	obj.setName(name);
	obj.setFNumber(fNumber);
	obj.setGrades(grades);
	
	return in;
}
 