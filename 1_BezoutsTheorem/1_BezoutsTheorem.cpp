#include <iostream>

int gcd(int a, int b)
{
	
	int result = std::min(a, b);
	while (result > 0) {
		if (a % result == 0 && b % result == 0) {
			break;
		}
		result--;
	}
	
	return result;
}


int main()
{
	// if gcd(a,b) !% c ---> no solution
	// solve:		a*x+b*y=0 (mod c)
	
	// x = s * (c / (a, b))
	// y = t * (c / (a, b))
	int a, b, c;
	std::cin >> a >> b >> c;

	if (a >= 1 && a <= 100 && b >= 1 && b <= 100 && c >= 1 && c <= 100) {
		if (gcd(a, b) % c == 0) {

			






		}
	}
	else {
		std::cout << "Invalid input data!";
		
	}
}

