#pragma once
#include <iostream>;

using std::ostream;
using std::istream;
using std::endl;
using std::cin;
using std::cout;

class Student
{
private:
	char* name;
	char* fNumber;
	int grade[3];

public:
	Student();
	Student(const char* name, const char* fNumber, int grade[3]);
	Student(const Student&);
	~Student();

	char* getName() const;
	char* getFNumber() const;
	const int* getGrade() const;

	void setName(const char* name);
	void setFNumber(const char* fNumber);
	void setGrade(const int* grade);

	bool operator=(const Student&);
	//friend Student& operator+(const Student& lhs, const Student& rhs);
	friend ostream& operator<<(ostream& os, const Student& rhs);
	friend istream& operator>>(istream& os, Student& rhs);
};



