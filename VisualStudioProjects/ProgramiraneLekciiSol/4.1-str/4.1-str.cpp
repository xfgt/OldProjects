#include <iostream>
#include <string.h>

using namespace std;
int main() {
	char* str = "C++Language"; // str � ����������
	while (*str) {
		cout << *str << '\n';
			str++;
	}
	return 0;
}