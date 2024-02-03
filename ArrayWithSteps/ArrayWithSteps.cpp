

#include <iostream>

int main()
{
    int lenght = 0;
    int step = 0;
    int num = 0;

    std::cin >> lenght;
    std::cin >> step;

    std::cout << "{";
    for (int i = 0; i < lenght; i++)
    {
        num += step;
        std::cout << num;
        if (lenght - i == 1)
            break;
        else
            std::cout << ", ";
    }
    std::cout << "}";



}

