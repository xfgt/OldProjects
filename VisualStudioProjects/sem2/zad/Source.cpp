#include <iostream>


int main() {

	int height = 0, lenght = 0, width = 0;
	int roomSpace = 0;
	int sum = 0;

	std::cin >> height >> lenght >> width;
	roomSpace = height * lenght * width;

	int n = 0;
	while (sum < roomSpace) {
		for (int i = 0; i < 3; i++)
		{
			std::cin >> n;
			if (n == -1)
				break;
			sum += n;
			
		}

		
	}
	
	if (roomSpace >= sum)
		std::cout << "Do I have space for my Audi A6? Space left: " << roomSpace-sum;
	else
		std::cout << "No more space. You need " << sum - roomSpace << " space more.";
	




	return 0;
}