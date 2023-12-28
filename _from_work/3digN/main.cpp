#include <iostream>

int main()
{
    std::string n;
    std::cin >> n;

    int tmp0 = n[0];
    int tmp1 = n[1];

    n[0] = tmp1;
    n[1] = tmp0;

    std::cout << n;

    return 0;
}
