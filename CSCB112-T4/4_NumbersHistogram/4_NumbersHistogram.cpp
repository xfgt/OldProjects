
#include <iostream>

int main()
{
	std::string input = "";
	std::cin >> input;

	int count0 = 0;
	int count1 = 0;
	int count2 = 0;
	int count3 = 0;
	int count4 = 0;
	int count5 = 0;
	int count6 = 0;
	int count7 = 0;
	int count8 = 0;
	int count9 = 0;


	for (int i = 0; i < input.size(); i++)
	{

		switch (input[i] - '0')
		{
		case 0:
			count0++;
			break;
		case 1:
			count1++;
			break;
		case 2:
			count2++;
			break;
		case 3:
			count3++;
			break;
		case 4:
			count4++;
			break;
		case 5:
			count5++;
			break;
		case 6:
			count6++;
			break;
		case 7:
			count7++;
			break;
		case 8:
			count8++;
			break;
		case 9:
			count9++;
			break;

		}

	}

	printf("0/%d, 1/%d, 2/%d, 3/%d, 4/%d, 5/%d, 6/%d, 7/%d, 8/%d, 9/%d", count0, count1, count2, count3, count4, count5, count6, count7, count8, count9);
}
