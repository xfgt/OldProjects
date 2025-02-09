#pragma once
#include <string>
#include <iostream>
using std::cout;
using std::endl;
using std::string;
using std::ostream;


class Motika {
private:
	short int duljina;
	string ostrie;
	string drujka;
	string rukohvatka;

public:
	Motika(string ostrie = "D", short int duljina = 0, string drujka = "=", string rukohvatka = "");
	~Motika();

	short int getDuljina() const;
	void setDuljina(short int duljina);
	string getOstrie() const;
	void setOstrie(string ostrie);
	string getDrujka() const;
	void setDrujka(string drujka);
	string getRukohvatka() const;
	void setRukohvatka(string rukohvatka);

	Motika& operator++();
	Motika operator++(int);
	Motika& operator--();
	Motika operator--(int);

	Motika& operator+(short int d);
	Motika& operator-(short int d);


	void print() const;
};


ostream& operator<<(ostream& out, const Motika& m);
