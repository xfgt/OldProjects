#include <iostream>
#include <string>



class BigInteger {

private:
	std::string string_number;


public:
	BigInteger() {
		string_number = "";
	}

	BigInteger(std::string n) {
		string_number = n;
	}

	std::string getString() const {
		return string_number;
	}

	void setString(std::string s) {
		string_number = s;
	}


};


std::ostream& operator<<(std::ostream& OUTobj, BigInteger& obj) {
	OUTobj << obj.getString() << std::endl;
	return OUTobj;
}

long& operator+(BigInteger& obj1, BigInteger& obj2) {

	
	long a, b, result;
	std::string strA = obj1.getString();
	std::string strB = obj2.getString();

	// parse to int
	a = atol(strA.c_str());
	b = atol(strB.c_str());
	
	// add them 
	result = a + b;

	// return value
	return result;
}

long& operator-(BigInteger& obj1, BigInteger& obj2) {

	long a, b, result;
	std::string strA = obj1.getString();
	std::string strB = obj2.getString();

	// parse to int
	a = atol(strA.c_str());
	b = atol(strB.c_str());

	// add them 
	result = a - b;

	// return value
	return result;
}


long long& operator*(BigInteger& obj1, BigInteger& obj2) {

	long long a, b, result;
	std::string strA = obj1.getString();
	std::string strB = obj2.getString();

	// parse to int
	a = atol(strA.c_str());
	b = atol(strB.c_str());

	// add them 
	result = a * b;

	// return value
	return result;
}


int main() {

	BigInteger a("123456789");
	BigInteger b("987654321");

	std::cout << a << b;

	std::cout << "a + b = "; std::cout << a + b << std::endl;
	std::cout << "a - b = "; std::cout << a - b << std::endl;
	std::cout << "a * b = "; std::cout << a * b << std::endl;

	std::cout << a << b;



	return 0;
}