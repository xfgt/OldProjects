#include <iostream>
#include <math.h>

int main() {
	float PI = 2 * acos(0.0);

	int R1 = 0, R2 = 0;
	int S1 = 0, S2 = 0, S3 = 0;
	std::cin >> R1 >> R2;
	if (R1 > R2) {

		S1 = PI * pow(R1, 2);
		S2 = PI * pow(R2, 2);
		S3 = S1 - S2;
	}

	printf("S1: %d\nS2:%d\nS3:%d\n", S1, S2, S3);
	




	return 0;
}