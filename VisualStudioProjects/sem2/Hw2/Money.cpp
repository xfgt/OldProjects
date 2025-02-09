#include <iostream>

class Money {

private:
	int leva;
	int stotinki;

public:

	Money(int lev = 0, int stotinka = 0) {
		leva = lev;
		stotinki = stotinka;

	}

	int getLeva() const {
		return leva;
	}
	int getStotinki() const {
		return stotinki;
	}

	void setLeva(int lv) {
		leva = lv;
	}
	void setStotinki(int st) {
		stotinki = st;
	}

	bool operator<(const Money& obj) const {
		return this->getLeva() < obj.getLeva();
	}
	bool operator>(const Money& obj) const {
		return this->getLeva() > obj.getLeva();
	}

};

Money& operator+(Money& obj, int num) {
	obj.setLeva(obj.getLeva() + num);
	return obj;
}
Money& operator-(Money& obj, int num) {
	obj.setLeva(obj.getLeva() - num);
	return obj;
}

Money& operator*(Money& obj, int num) {
	obj.setLeva(obj.getLeva() * num);
	return obj;
}
Money& operator/(Money& obj, int num) {
	obj.setLeva(obj.getLeva() / num);
	return obj;
}


Money& operator%(Money& obj, int num) {
	int nLev;
	double nStot;

	nLev = obj.getLeva();
	nStot = obj.getStotinki();

	double wholeNumber = (double)nLev + (nStot / 100);
	wholeNumber *= (double)num / 100;

	nLev = floor(wholeNumber);
	nStot = (wholeNumber - nLev) * 100;


	obj.setLeva(nLev);
	obj.setStotinki((int)nStot);
	return obj;
}


std::ostream& operator<<(std::ostream& COUT, Money& obj) {

	COUT << obj.getLeva() << "," << obj.getStotinki() << "lv." << std::endl;
	return COUT;

}

std::istream& operator>>(std::istream& IN, Money& obj) {
	int x, y; // THESE ARE LIKE PLACEHOLDERS FOR THE PRIVATE VARIABLES OF THE OBJECT
	IN >> x >> y; // WE GET THEM
	// WE SET THEM
	obj.setLeva(x);
	obj.setStotinki(y);


	// RETURN THE OBJECT WITH THE NEW PRIVATE VALUES
	return IN;
}

int money() {

	Money m1 = Money(2, 60); //2 lv. 60 st.
	std::cout << m1;

	m1 + 5;
	std::cout << m1;

	m1 - 5;
	std::cout << m1;

	m1 * 5;
	std::cout << m1;

	m1 / 5;
	std::cout << m1;

	m1 % 5;
	std::cout << m1;

	if (m1 < 5) {
		std::cout << 'y';
	}
	else if (m1 > 5) {

		std::cout << 'n';
	}
	std::cout << std::endl;
	Money m2 = Money(7, 30);
	if (m2 < 5) {
		std::cout << 'y';

	}
	else if (m2 > 5) {
		std::cout << 'n';

	}
	std::cout << std::endl;
	std::cin >> m2;
	std::cout << m2;





	return 0;
}

/*
	ОТГОВОРИ КЪМ ЗАДАЧАТА:

	1.	Да, понеже операнди ще бъдат самите обекти.

	2.
		За аритметичните: обект, число
		За сравнение: само обект
		За I/O:	обектът I/O, обектът от нашия клас "Money"


*/