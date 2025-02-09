#include "Student.h"

int main() {
	Student ivan("Ivan", "F123456", new int[3] { 4, 5, 6 });
	cout << ivan;

	Student b;
	cin >> b;
	cout << b;
}