#include <iostream>
using namespace std;
int main() {
	char str[] = "C++Language"; // str � ���������� ��������
	char* pstr = str; // pstr � �������� ��� ���� str
	while (*pstr) {
		cout << *pstr << '\n';
			pstr++;
	} // pstr ���� �� � ������� � ���� �C++Language�.


	// @custom
	cout << "\nreverse: ";
	int len = strlen(str);
	while (*pstr - len) {
		cout << *pstr << '\n';
			pstr--;
		if (*pstr < 0)
			break;
	}
	
	return 0;
}
