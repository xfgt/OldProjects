#include <iostream>

int main()
{
    int m, n; // from 'm' to 'n' range

    std::cin >> m >> n;

    /*цифрите на които са различни(m и n са дадени цели
        числа, 0 < m < n)*/

    for (int i = m; i <= n; i++)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    if (n > 0 || m > 0) {
        if (n > m) {
            std::cout << "n > m";
        }
        else {
            std::cout << "m > n";
        }
    }
}
