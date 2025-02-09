#include "Motika.h"


int main() {

	Motika moti;

	moti.print();
	cout << endl;


	moti.setRukohvatka("|>");
	moti.setDuljina(8);
	moti.print();
	cout << endl;


	//    |3-=-=-=-=-=-()

	Motika fancyMotika("()", 5, "-=", "|3");
	fancyMotika.print();
	cout << endl;

	++fancyMotika;
	++fancyMotika;
	++fancyMotika;
	++fancyMotika;
	++fancyMotika;
	++fancyMotika;
	++fancyMotika;
	++fancyMotika;
	++fancyMotika;
	++fancyMotika;
	++fancyMotika;
	fancyMotika.print();
	cout << endl;

	int a = 8;
	cout << ++a << endl;

	int b = 8;
	cout << b++ << endl;

	cout << a << " " << b << endl;


	--fancyMotika;
	--fancyMotika;
	--fancyMotika;
	--fancyMotika;
	--fancyMotika;
	--fancyMotika;
	--fancyMotika;
	--fancyMotika;
	--fancyMotika;

	fancyMotika.print();
	cout << endl;

	fancyMotika = fancyMotika + 10;

	fancyMotika.print();
	cout << endl;

	cout << moti << endl << fancyMotika << endl;



	return 0;
}