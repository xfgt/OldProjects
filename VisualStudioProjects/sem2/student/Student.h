#pragma once

class Student
{

	private:
		const char* fullName;
		const char* course;
		const char* major;
		const char* fNumber;
		double grades[5];


	public:

		Student();
		~Student();

		Student(const char*, const char*, const char*, const char*, double*);

		const char* getFullName() const;
		const char* getCourse() const;
		const char* getMajor() const;
		const char* getFNumber() const;
		double* getGrades() const;


		

};

