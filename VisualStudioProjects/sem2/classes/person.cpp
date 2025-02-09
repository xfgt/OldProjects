#include "person.h"
#include <iostream>
//definitions

Person::Person(const char* nme, int h, int w) {
	name = nme;
	hcm = h;
	wkg = w;

	// global variables (the privates) are set to the values of the arguments of the fucntion ( the constructor's arguments)

}

const char* Person::getName() const { return name; }
// getters (readonly \/)
int Person::getH() const { return hcm; }
int Person::getW() const { return wkg; }

// setters
void Person::setH(int h) { hcm = h; }
void Person::setW(int w) { wkg = w; }

double Person::bmi() const { 

	double t = 0.01 * hcm;
	t *= t;
	return wkg / t;

}

void Person::prn() const {

	std::cout << "Лични данни:\nИме: " << name
		<< "\nвисочина [cm]: " << hcm
		<< "\nтегло [kg]: " << wkg
		<< "\nиндекс на телесна маса: " << bmi();
				status(bmi());
	std::cout << std::endl;

}

void Person::status(double bmi_value) const {
	const char* message = "";

	if (bmi_value < 16) {
		message = "(severely underweight)";
	}
	else if (bmi_value >= 16 && bmi_value <= 18.49) {
		message = "(underweight)";
	}
	else if (bmi_value >= 18.5 && bmi_value <= 24.99) {
		message = "(normal)";
	}
	else if (bmi_value >= 25 && bmi_value <= 29.99) {
		message = "(overweight)";
	}
	else if (bmi_value >= 30 && bmi_value <= 34.99) {
		message = "(obese class I)";
	}
	else if (bmi_value >= 35 && bmi_value <= 39.99) {
		message = "(obese class II)";
	}
	else if (bmi_value >= 40) {
		message = "(obese class III)";
	}
	else {
		message = "[bad value]";
	}

	std::cout << message;
}


double theFunction(Person* a, Person* b) {
	/*
	връща сумата от квадратите на
разликите на техните показатели ръст и индекс на
телесната маса;
*/

	int ah = a->getH();
	int bh = b->getH();

	double abmi = a->bmi();
	double bbmi = b->bmi();

	int heightdiff = ah - bh;
	heightdiff *= heightdiff;

	double bmidiff = abmi - bbmi;
	bmidiff *= bmidiff;

	return heightdiff + bmidiff;

}