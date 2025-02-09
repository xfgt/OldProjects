#include <iostream>
using namespace std;


struct rat {
	int num;
	int den;
};

void makerat(rat &r, int a, int b) {
	r.num = a; 
				/*
				 'r' is an object 
				 This variable object shares the same variables "num" and "den" because it has 'rat' declared infront of it, standing as its type;
				 using '&' means we are going to access the passed variable by value, that has the template of the 'rat' structure;
				*/
	r.den = b;
}

int numer(rat& r) {
	return r.num;
}
int denom(rat& r) {
	return r.den;
}

rat sumrat(rat &r1, rat &r2) {

	rat r; // "sum"
	makerat(r, numer(r1) * denom(r2) + numer(r2) * denom(r1), denom(r1) * denom(r2));
	

	return r;
}

void printrat(rat r) { 
	cout << numer(r) << "/" << denom(r) << endl;
}

int main(void) {


	rat r1, r2;

	makerat(r1, 1, 2);
	makerat(r2, 3, 4);

	printrat(sumrat(r1, r2));




	return 0;
}
