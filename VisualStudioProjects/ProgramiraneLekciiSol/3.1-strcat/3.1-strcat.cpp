#include <iostream>
#include <string.h>
#pragma warning(disable : 4996)
using namespace std;

int main() {
	char a[20][10]; // a � ����� �� 20 ���� char[10]
	cout << "n = ";
	int n;
	cin >> n;
	int i;
	for (i = 0; i <= n; i++) {
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
	char s[200] = ""; // s �� ������� ��������� �� ��������������
	for (i = 0; i <= n; i++)
		strcat(s, a[i]);
	cout << s << '\n';
	return 0;
}