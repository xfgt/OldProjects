#include <iostream>
#include <cmath>

int main()
{
    int a, x ,y;
    std::cin >> a;

    int a_h = a/2;
    std::cin >> x >> y;

    if(abs(x) <= abs(a_h) && abs(y) <= abs(a_h))
        return 0;
    return 1;
}
