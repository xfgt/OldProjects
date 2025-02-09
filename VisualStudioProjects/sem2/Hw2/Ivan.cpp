#include <iostream>

class Student {

private:
	std::string ime;
	double uspeh;
public:
	Student(std::string localIme, double localUspeh) {
		ime = localIme;
		uspeh = localUspeh;
	}

	std::string getIme() const {
		return ime;
	}
	double getUspeh() const {
		return uspeh;
	}

	void setUspeh(double usp) {
		this->uspeh = usp;
	}


};
std::ostream& operator<<(std::ostream& COUT, Student& obj) {
	COUT << obj.getIme() << '\n' << obj.getUspeh() << std::endl;
	return COUT;
}


//записва се в(обект), оператор, (обектът от класа, операнд)
Student& operator+(Student& obj, double num) {
	obj.setUspeh(obj.getUspeh() + (obj.getUspeh() * (num / 100)));
	return obj;
}

int main() {

	Student ivanObj = Student("Ivan", 4.50);

	std::cout << ivanObj;

	ivanObj + 5;
	std::cout << ivanObj;






	return 0;
}