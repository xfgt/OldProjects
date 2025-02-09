/**
	
	3.
		

		обектът b, дефиниран от тип B, като член данна в тялото на производния клас D
		първоначално се очаква да принтира тялото на default-ния конструктор на B, т.е "B::B()",
		но това се променя след като в тялото на конструктора с един параметър на D, присвояваме резултатът на B(-n) в обекта b, получавайки следния изход: 

		B::B(-3)
		D::D(3)


	4.
		Ще се принтира член-функцията на базовия клас. Причината за което е, че дадената член-функция "print()" не е декларирана като virtual.

	5.
		По принцип нямаме пряк достъп до член-данните на B от D, тъй като в B са декларирани като "private".
		Ако примерът беше такъв, че член-данната 'b' да беше "protected" или "public", тогава бихме могли да изпълним този код успешно.


	6.
		възможни:
			2, 3
		невъзможни:
			7, 1, 6, 5, 4



**/

#include <iostream>


class Employee {

	friend std::ostream& operator<<(std::ostream& OUT, Employee& obj) {
		OUT << obj.name << " (default employee)" << "\nSalary: " << obj.salary;
		return OUT;
	}


	friend std::istream& operator>>(std::istream& IN, Employee& obj) {
		std::string iName;
		double iSalary;
		IN >> iName >> iSalary;
		obj.setName(iName);
		obj.setSalary(iSalary);

		return IN;
	}

	

private:
	std::string name;
	double salary;

public:
	Employee() {
		name = "";
		salary = 0.0;
	}

	Employee(std::string n, double s) {
		name = n;
		salary = s;
	}
	Employee(Employee& obj) {
		this->name = obj.name;
		this->salary = obj.salary;
	}

	std::string getName() const {
		return name;
	}
	double getSalary() const {
		return salary;
	}

	void setName(std::string n) {
		name = n;
	}

	void setSalary(double s) {
		salary = s;
	}
	
};



class Programmer : public Employee {
	friend std::ostream& operator<<(std::ostream& OUT, Programmer& obj) {
		OUT << obj.getName() << " (Programmer)" << "\nSalary: " << obj.getSalary();
		return OUT;
	}

	friend std::istream& operator>>(std::istream& IN, Programmer& obj) {
		std::string iName;
		double iSalary;
		IN >> iName >> iSalary;
		obj.setName(iName);
		obj.setSalary(iSalary);

		return IN;
	}
public:
	Programmer() : Employee() {};
	Programmer(std::string n, double s) : Employee(n, s) {};
	
};

int main() {

	Employee e;
	Programmer p("Hacker, Harry", 6300);


	std::cout << e << std::endl;
	std::cout << p << std::endl;

	std::cin >> e;
	std::cout << e << std::endl;

	
	
	
	return 0;
}