#include <iostream>


int main() {
	
	int a, b;
	std::cin >> a >> b;
	int p = 2 * (a + b);
	int s = a * b;
	printf("p:%d\ns:%d", p, s);

	return 0;
}