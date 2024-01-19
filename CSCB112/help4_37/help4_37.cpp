// help4_37.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int n, searchedValue;
    int num = 0;
    int sum = 0;


    std::cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        std::cin >> num;
        sum += num;
    }


    std::cin >> searchedValue;

    std::cout << std::endl;
    if (searchedValue == sum)
        std::cout << "yes" << std::endl;


}
