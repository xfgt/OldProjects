

#include <iostream>

int main()
{
    int n;
    std::cin >> n;

	std::string day = "";

	switch (n)
	{
	case 1:
		day = "monday";
		break;
	case 2:
		day = "tuesday";
		break;
	case 3:
		day = "wednesday";
		break;
	case 4:
		day = "thursday";
		break;
	case 5:
		day = "friday";
		break;
	case 6:
		day = "saturday";
		break;
	case 7:
		day = "sunday";
		break;

	default:
		day = "error";
		break;
	}

	std::cout << day << std::endl;
}

