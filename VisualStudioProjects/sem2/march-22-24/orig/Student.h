#pragma once

#include <iostream>

class Student {

private:
	char* name;
	char* fNumber;
	int grades[3];


public:
	Student();
	Student(const char* name, const char* fN, int grades[3]);
	~Student();

	char* getName() const;
	char* getFNumber() const;
	const int* getGrades() const;

	void setName(const char*);
	void setFNumber(const char*);
	void setGrades(int*);

	friend std::ostream& operator<<(std::ostream&, Student&);
	friend std::istream& operator>>(std::istream&, Student&);

	
};
