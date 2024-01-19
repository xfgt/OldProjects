#include <iostream>
#include <string.h>
#pragma warning(disable : 4996) //for strcat
using namespace std;
int main() {
	char a[10];
	char b[4];

	cout << "a= ";
	cin >> a; // въвеждане на стойност на a
	
	cout << "b= ";
	cin >> b; // въвеждане на стойност на b

	cout << "strcat[ab]: " << strcat(a, b) << endl; // конкатениране на a и b, резултатът е в a
	cout << "a: " << a << '\n'; // извеждане на a
	
	cout << "strlen: " << strlen(strcat(a, b)) << '\n'; //повторна конкатенация


	cout << "strcmp: " << strcmp(a, b) << '\n';
	cout << "strncmp: " << strncmp(a, b, 1) << '\n';
	// the third argument of strncmp is the number of chars to be compared.

	/*
		-1  ->	a < b
		 0  ->	a = b
		 1  ->	a > b
	*/

	cout << "atoi[a]: "<< atoi(a) << endl;
	cout << "atoi[b]: "<< atoi(b) << endl;

	cout << "atof[a]: "<< atof(a) << endl;
	cout << "atof[b]: "<< atof(b) << endl;
	return 0;
}