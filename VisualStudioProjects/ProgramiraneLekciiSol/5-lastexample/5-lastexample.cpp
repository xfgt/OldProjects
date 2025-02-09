#include <iostream>
#include <iomanip>
#include <string.h>
#pragma warning(disable : 4996)
using namespace std;
int main() {
	char a[100][10];
	int n, n1, n2;
	cout << "n = ";
	cin >> n;
	if (!cin) {
		cout << "Error! \n";
		return 0;
	}
	
	cout << "\nn1 = ";
	cin >> n1;
	cout << "n2 = ";
	cin >> n2;


	
	int i;
	for (i = 0; i <= n1; i++) { 
		cout << "a[" << i << "]= ";
		cin >> a[i];
	}

	for (i = 0; i <= n2; i++) { 
		char min[10];
		strcpy(min, a[i]);
		int k = i;
		for (int j = i + 1; j <= n1; j++) { 
			if (strcmp(a[j], min) == 1) {
				strcpy(min, a[j]);
				k = j;
			}
		}
		strcpy(min, a[i]);
		strcpy(a[i], a[k]);
		strcpy(a[k], min);
	}

	for (i = 0; i <= n1; i++) {
		cout << setw(3) << a[i];
		if (i != 0 && i % 5 == 0) cout << '\n';
	}
	cout << '\n';
	return 0;
}