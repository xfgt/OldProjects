#include <iostream>


class Kurabiika {

private:
	int procentZahar;
	char* kakvoBrashno;
	
protected:
	bool izpechena;

public:
	Kurabiika() {
		procentZahar = 0;
		kakvoBrashno = new char[2];
		strcpy_s(kakvoBrashno, 2, " ");
		izpechena = false;
	}
	Kurabiika(int pz, const char* brashno, bool izp) {
		procentZahar = pz;
		kakvoBrashno = new char[strlen(brashno) + 1];
		strcpy_s(kakvoBrashno, strlen(brashno) + 1, brashno);
		izpechena = izp;

	}
	~Kurabiika() {
		delete[] kakvoBrashno;
	}

	int getProcentZahar() const {
		return procentZahar;
	}

	char* getBrashno() const{
		return kakvoBrashno;
	}
	bool getBaked() const {
		return izpechena;
	}

	void setProcentZahar(int prz) {
		procentZahar = prz;
	}
	void setBrashno(const char* a) {
		delete[] kakvoBrashno;
		kakvoBrashno = new char[strlen(a) + 1];
		strcpy_s(kakvoBrashno, strlen(a) + 1, a);
	}
	void setBaked(unsigned n) {
		if (n == 0)
			izpechena = false;
		if (n == 1)
			izpechena = true;
	}

	void print(){
		std::cout << "Kurabiika [" << this << "]" << std::endl;
		std::cout << "Procent zahar: " << this->getProcentZahar() << "%" << std::endl;
		std::cout << "Vid brashno: " << this->getBrashno() << std::endl;
		std::cout << "Izpechena: " << this->getBaked() << std::endl << std::endl;
	}

	Kurabiika& operator+(int n) {
		int current = this->getProcentZahar();
		this->setProcentZahar(current + n);
		return *this;
	}
	Kurabiika& operator+(Kurabiika& obj) {
		this->procentZahar += obj.procentZahar;
		return *this;
	}
};


class Forma{

private:
	int ugli;

public:
	Forma() : ugli(0) {}
	Forma(int n) {
		ugli = n;
	}
	int getUgli() const {
		return ugli;
	}
};


class ModernaKurabiika : public Forma, public Kurabiika {

public:
	ModernaKurabiika() : Kurabiika(), Forma() {
		Kurabiika::setProcentZahar(5);
	}

	void print()  {
		std::cout << "Moderna Kurabiika [" << this << "]" << std::endl;
		std::cout << "Procent zahar: " << this->getProcentZahar() << "%" << std::endl;
		std::cout << "Vid brashno: " << this->getBrashno() << std::endl;
		std::cout << "Izpechena: " << this->getBaked() << std::endl;
		std::cout << "Ugli: " << this->getUgli() <<  std::endl << std::endl;
	}

};
int main() {
	
	Kurabiika k1;
	k1.print();

	Kurabiika k2(15, "Pshenicheno", 1);
	k2.print();
	k2.setBaked(0);
	k2.print();

	k1 + 2; // 2 * procent zahar
	k1.print();

	k2 + k1;
	k2.print();

	ModernaKurabiika mk1;
	mk1.print();




	return 0;
}