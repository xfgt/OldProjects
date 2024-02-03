#include <iostream>
#include <cmath>

int main()
{
    float g = 0;
    float sum = 0;
    float result = 0;

    for (int i = 0; i <= 9; i++)
    {
        std::cin >> g;
        sum += g;
    }
    result = sum / 10;
    std::cout << ceil(result) << std::endl;

    return 0;
}
