#include "Motika.h"

Motika::Motika(string ostrie, short int duljina, string drujka, string rukohvatka) {
	setOstrie(ostrie);
	setDuljina(duljina);
	setDrujka(drujka);
	setRukohvatka(rukohvatka);
}


Motika::~Motika() {
	//......
}



short int Motika::getDuljina() const {
	return duljina;
}

void Motika::setDuljina(short int duljina) {
	if (duljina >= 0) {
		this->duljina = duljina;
	}
}

string Motika::getOstrie() const {
	return ostrie;
}

void Motika::setOstrie(string ostrie) {
	//if (ostrie != "") {
	if (ostrie.length() > 0) {
		this->ostrie = ostrie;
	}
}

string Motika::getDrujka() const {
	return drujka;
}

void Motika::setDrujka(string drujka) {
	if (drujka.length() > 0) {
		this->drujka = drujka;
	}
}

string Motika::getRukohvatka() const {
	return rukohvatka;
}

void Motika::setRukohvatka(string rukohvatka) {
	this->rukohvatka = rukohvatka;
}


Motika& Motika::operator++() {
	//this->duljina++;
	setDuljina(duljina + 1);

	return *this;
}

Motika Motika::operator++(int) {
	Motika m = *this;
	setDuljina(duljina + 1);

	return m;
}

Motika& Motika::operator--() {
	//this->duljina++;
	setDuljina(duljina - 1);

	return *this;
}

Motika Motika::operator--(int) {
	Motika m = *this;
	setDuljina(duljina - 1);

	return m;
}


Motika& Motika::operator+(short int d) {
	setDuljina(getDuljina() + d);

	return *this;
}

Motika& Motika::operator-(short int d) {
	setDuljina(getDuljina() - d);

	return *this;
}

void Motika::print() const {
	cout << rukohvatka;
	for (int i = 0; i < duljina; i++) {
		cout << drujka;
	}
	cout << ostrie;
}


ostream& operator<<(ostream& out, const Motika& m) {
	out << m.getRukohvatka();
	for (int i = 0; i < m.getDuljina(); i++) {
		out << m.getDrujka();
	}
	out << m.getOstrie();

	return out;
}
