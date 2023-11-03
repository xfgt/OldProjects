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

int main()
{
    double first, second, third;
    std::cin >> first >> second >> third;

    std::cout << "Smallest value : " << findSmallest(first, second, third);
}