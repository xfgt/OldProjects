#include <iostream>
using namespace std;
int main() {
	char str[] = "C++Language"; // str е константен указател
	char* pstr = str; // pstr е указател към низа str
	while (*pstr) {
		cout << *pstr << '\n';
			pstr++;
	} // pstr вече не е свързан с низа “C++Language”.


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
