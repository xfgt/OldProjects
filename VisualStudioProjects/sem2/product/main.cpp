#include <iostream>
#include <string>


class Product {

private:

	std::string name;
	double price;
	std::string manifacturer;
	double hcm, wcm, lcm;
	int bestBeforeDate; //YYYYMMDD


	// protected: e vidim za vs negovi naslednici


public:
	Product() {
		name = "";
		price = 0.0;
		manifacturer = "";
		hcm = 0.0;
		wcm = 0.0;
		lcm = 0.0;
		bestBeforeDate = 99999999;
	}

	std::string getName() const { return name; }
};

int main() {

	Product pr1;


	return 0;
}