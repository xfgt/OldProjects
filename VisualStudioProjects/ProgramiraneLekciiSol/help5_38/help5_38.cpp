// help5_38.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int n = 0, num = 0, sum = 0;

    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
            sum += i;
    }
    std::cout << std::endl;
    std::cout << sum;
}

