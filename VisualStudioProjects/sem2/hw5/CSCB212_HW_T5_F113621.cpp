#include <iostream>


class Employee {

private:
	char* e_name;
	double e_salary;
	int e_monthsOfSlavery; // Стаж

public:
	Employee() {
		e_name = new char[2]; // 32 + \0
		strcpy_s(e_name, 2, " "); // 32 + \0

		e_salary = 0.0;
		e_monthsOfSlavery = 0;
	}

	Employee(const char* lName, double lSalary, int lMonths){
		e_name = new char[strlen(lName) + 1];
		strcpy_s(e_name, strlen(lName) + 1, lName);

		e_salary = lSalary;
		e_monthsOfSlavery = lMonths;
	}

	~Employee() {
		delete[] e_name;
	}

	char* get_e_Name(){
		return e_name;
	}

	double get_e_Salary() {
		return e_salary;
	}

};

class Manager : public Employee {

private:
	std::string m_Department;

public:

	Manager() : Employee() {
		m_Department = "";
	}
	Manager(std::string localdep, const char* n, double s, int m) : Employee(n, s, m){
		m_Department = localdep;
	}

	void getManagerInfo() {
		std::cout << "Name: " << get_e_Name() << std::endl;
		std::cout << "Department: " << m_Department << std::endl;
		std::cout << "Salary: " << get_e_Salary() << std::endl;
	}
	
};

class Executive : public Manager {

public:
	Executive() : Manager() {}

	Executive(std::string d, const char* n, double s, int m) : Manager(d, n, s, m) {  }


	void getExecutiveInfo() {
		std::cout << "Executive" << std::endl;
		getManagerInfo();
	}

};

int main() {

	Executive ex("Security", "John Smith", 6200, 120);
	ex.getExecutiveInfo();

	return 0; //here destructors come into play
}