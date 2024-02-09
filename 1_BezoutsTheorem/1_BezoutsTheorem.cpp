#include <iostream>
#include <cmath>


int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}



int BezoutsCoefs(int a, int b, int pos) { //pos [0, 1] (s,t)
	int const ROWS = 4;
	

	int cnt = 0;
	int x = (a > b) ? a : b;
	int y = (a < b) ? a : b;
	
	int tmp = x % y;
	while (tmp) {
		x = (tmp > y) ? tmp : y;
		y = (tmp < y) ? tmp : y;
		tmp = x % y;
		cnt++;
	}
	

	if (cnt > 0) {
		int** arr = new int* [ROWS];
		for ( int i = 0; i < ROWS; i++) {
			arr[i] = new int[cnt + 2]; // s & t
		}
		x = (a > b) ? a : b;
		y = (a < b) ? a : b;
		arr[0][0] = x;
		arr[0][1] = y;

		arr[1][0] = 0;

		arr[2][0] = 1;
		arr[2][1] = 0;

		arr[3][0] = 0;
		arr[3][1] = 1;

		int j = 2;
		tmp = x % y;
		while (tmp) {
			arr[0][j] = tmp;		// mods 
			arr[1][j - 1] = x / y;	// divs
			x = (tmp > y) ? tmp : y;
			y = (tmp < y) ? tmp : y;
			tmp = x % y;
			j++;
		}
		arr[1][j - 1] = x / y; // endpoint


		for ( int i = 2; i < ROWS; i++) {
			for ( int j = 2; j < cnt + 2; j++) {
				if (i == 2)
					arr[i][j] = arr[i - 1][j - 1] * arr[i][j - 1] + arr[i][j - 2];
				else
					arr[i][j] = arr[i - 2][j - 1] * arr[i][j - 1] + arr[i][j - 2];
			}
		}

		int m = 0, s=0, t=0;
		
		for ( int j = 0; j < cnt + 2; j++) {
			m = arr[0][j];
			s = pow(-1, j) * arr[2][j];
			t = pow(-1, j + 1) * arr[3][j];
		}

		/*std::cout << s << "\n" << t << "\n";*/
		for ( int i = 0; i < ROWS; i++) {
			delete[] arr[i];
		}
		delete[] arr;
		if (pos == 0)
			return s;
		if (pos == 1)
			return t;
	}
	else {
		if (pos == 0)
			return 0;
		if (pos == 1)
			return 1;
	}

	return 0;
}




int main() {
	
	int a, b, c;
	std::cin >> a >> b >> c;

	int GCD = gcd(a, b);
	int division = c / GCD;
	int s = BezoutsCoefs(a, b, 0);
	int t = BezoutsCoefs(a, b, 1);
	int x = 0;
	int y = 0;
	if (division != 0) {
		x = s * division;
		y = t * division;
	}
	int larger = 0;
	int res = (a * x) + (b * y);
		
		/*std::cout << "[x = " << x << "]" << std::endl;
		std::cout << "[y = " << y << "]" << std::endl;
		std::cout << "[s = " << s << "]" << std::endl;
		std::cout << "[t = " << t << "]" << std::endl;
		std::cout << "[division = " << division << "]" << std::endl;
		std::cout << "[GCD(a,b) = " << GCD << "]" << std::endl;
		std::cout << "[res = " << res << "]" << std::endl;*/
	


	if (a >= 1 && a <= 100 && b >= 1 && b <= 100 && c >= 1 && c <= 100) {
		if (GCD% c == 0 || division != 0) {

			std::cout << x << std::endl;
			std::cout << y << std::endl;
			
		}
		else {
			std::cout << "No solution!" << std::endl;
		}
	}
	else {
		std::cout << "Invalid input data!" << std::endl;
		
	}
	return 0;
}

