#pragma once

// declarations


class Person {

	private:
		// variables
		const char* name; // (string)
		int hcm;
		int wkg;
	public:
		Person(const char*, int, int);	// constructor

		
		const char* getName() const;	//getter (readonly)
		int getH() const;
		void setH(int);					// setter
		int getW()const;
		void setW(int);
		double bmi() const;
		void status(double) const;
		void prn() const;
};

double theFunction(Person*, Person*);