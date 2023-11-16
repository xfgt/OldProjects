#include <iostream>

int main()
{

    
    double first, second, third;
    std::cin >> first >> second >> third;


    if (first <= second && first <= third)
    {
        std::cout << first;
    }
    else if (second <= first && second <= third)
    {
        std::cout << second;
    }
    else
    {
        std::cout << third;
    }


}