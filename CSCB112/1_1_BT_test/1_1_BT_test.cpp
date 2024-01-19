// 1_1_BT_test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
///	STAGE 1

	int const ROWS = 4;
	int a, b;
	do {
		cout << "Please enter a: ";
		cin >> a;
	} while (a == 0);

	do {
		cout << "Please enter b: ";
		cin >> b;
	} while (b == 0);

	int cnt = 0;
	//преброяваме всички остатъци от деленето на a и b,
	//за да конструираме динамичен двумерен масив
	int x = (a > b) ? a : b;
	int y = (a < b) ? a : b;
	int tmp = x % y;
	while (tmp) {
		x = (tmp > y) ? tmp : y;
		y = (tmp < y) ? tmp : y;
		tmp = x % y;
		cnt++;
	}
	cout << "cnt = " << cnt << endl;


/// STAGE 2

	if (cnt > 0) {
		//създаваме двумерен динамичен масив, в който ще съхраним стойностите
		int** arr = new int* [ROWS];
		for (unsigned int i = 0; i < ROWS; i++) {
			arr[i] = new int[cnt + 2]; // ???
		}
		x = (a > b) ? a : b;
		y = (a < b) ? a : b;
		arr[0][0] = x; arr[0][1] = y;
		arr[1][0] = 0;
		arr[2][0] = 1; arr[2][1] = 0;
		arr[3][0] = 0; arr[3][1] = 1;

		int j = 2;
		tmp = x % y;
		while (tmp) {
			arr[0][j] = tmp; // 30 18 r -> arr[0][2] = 12 
			arr[1][j - 1] = x / y; // q -> arr[1][1] = 1
			x = (tmp > y) ? tmp : y;
			y = (tmp < y) ? tmp : y;
			tmp = x % y;
			j++;
		}
		arr[1][j - 1] = x / y; // ?


/// STAGE 3

		for (unsigned int i = 2; i < ROWS; i++) {
			for (unsigned int j = 2; j < cnt + 2; j++) {
				if (i == 2)
					arr[i][j] = arr[i - 1][j - 1] * arr[i][j - 1] + arr[i][j - 2];
				else
					arr[i][j] = arr[i - 2][j - 1] * arr[i][j - 1] + arr[i][j - 2];
			}
		}

		for (unsigned int i = 0; i < ROWS; i++) {
			for (unsigned int j = 0; j < cnt + 2; j++) {
				cout << arr[i][j] << "\t";
			}
			cout << endl;
		}


/// STAGE 4

		//отпечатване на равенствата:
		//rk = (-1)k*xk*a+(-1)k+1*yk*b;
		for (unsigned int j = 0; j < cnt + 2; j++) {
			cout << arr[0][j] << " = " << pow(-1, j) * arr[2][j]
				<< "*" << a << " + "
				<< pow(-1, j + 1) * arr[3][j] << "*"
				<< b << "\n";
			cout << endl;
		}

		//освобождаваме заетата от масива памет
		for (unsigned int i = 0; i < ROWS; i++) {
			delete[] arr[i];
		}
		delete[] arr;
	}
}

