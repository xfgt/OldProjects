/*
*   &, |, ^, ~, <<, >>
*/

#include <iostream>

int main()
{
    int a, b;

    std::cin >> a;
    std::cin >> b;

    int i, ili, xili, ne, shl, shr;

    i = a & b;
    ili = a | b;
    xili = a ^ b;
    ne = ~a; ~b;
    shl = a << b;
    shr = a >> b;

    std::cout << i << std::endl;
    std::cout << ili << std::endl;
    std::cout << xili << std::endl;
    std::cout << ne << std::endl;
    std::cout << shl << std::endl;
    std::cout << shr << std::endl;

}
