#include <iostream>
#include <string.h>
#pragma warning(disable : 4996) //for strcat
using namespace std;
int main() {
	char a[10];
	char b[4];

	cout << "a= ";
	cin >> a; // ��������� �� �������� �� a
	
	cout << "b= ";
	cin >> b; // ��������� �� �������� �� b

	cout << "strcat[ab]: " << strcat(a, b) << endl; // ������������� �� a � b, ���������� � � a
	cout << "a: " << a << '\n'; // ��������� �� a
	
	cout << "strlen: " << strlen(strcat(a, b)) << '\n'; //�������� ������������


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