#include "Student.h"


Student::Student() {


	const char* fullName = "";
	const char* course = "";
	const char* major = "";
	const char* fNumber = "";
	
	// grades
	for (int i = 0; i < 5; i++)
	{
		grades[i] = 0;
	}

}


Student::Student(const char* localName, const char* localCourse, const char* localMajor, const char* localFNumber, double* gradesArr) {

	fullName = localName;
	course = localCourse;
	major = localMajor;
	fNumber = localFNumber;
	for (int i = 0; i < 5; i++)
	{
		grades[i] = gradesArr[i];
	}
}


const char* Student::getFullName() const { return fullName;}
const char* Student::getCourse() const { return course;}
const char* Student::getMajor() const { return major;}
const char* Student::getFNumber() const { return fNumber;}

