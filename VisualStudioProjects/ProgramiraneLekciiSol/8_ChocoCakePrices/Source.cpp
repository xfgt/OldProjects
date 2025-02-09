#include <iostream>


int main() {
	int A, B, x, y;

	std::cin >> x >> A >> y >> B;

	int choco = x * A;
	int cake = y * B;
	int diff = 0;
	if (cake > choco) {
		diff = abs(cake / choco);
	}
	std::cout << diff << std::endls;
	return 0;
}