#include <iostream>

double findSmallest(double first, double second, double third)
{
    if (first <= second && first <= third)
    {
        return first;
    }
    else if (second <= first && second <= third)
    {
        return second;
    }
    else
    {
        return third;
    }
}

double findMid(double num1, double num2, double num3)
{
    if (num2 > num1 && num1 > num3 || num3 > num1 && num1 > num2) {
        return num1;
    }
    if (num1 > num2 && num1 > num3 || num3 > num2 && num2 > num1) {
        return num2;
    }
    if (num1 > num3 && num3 > num2 || num2 > num3 && num3 > num1) {
        return num3;
    }
}

double findBiggest(double first, double second, double third)
{
    if (first >= second && first >= third)
    {
        return first;
    }
    else if (second >= first && second >= third)
    {
        return second;
    }
    else
    {
        return third;
    }
}


int main()
{
	double x, y, z, nMin, nMid, nMax; 
	std::cin >> x >> y >> z;
	
    nMin = findSmallest(x, y, z);
    nMid = findMid(x, y, z);
    nMax = findBiggest(x, y, z);

    std::cout << std::endl;
    std::cout << nMin << std::endl;
    std::cout << nMid << std::endl;
    std::cout << nMax << std::endl;

	return 0;
}

