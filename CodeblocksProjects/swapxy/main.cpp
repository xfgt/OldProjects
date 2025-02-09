#include <iostream>
#include <cstdlib>


int main()
{
    int x = 5;
    int y = 7;

    std::cout << x << std::endl;
    std::cout << y << std::endl << std::endl;

    x+=y;
    y-=x;
    y=abs(y);
    x-=y;


    std::cout << x << std::endl;
    std::cout << y << std::endl;

    return 0;
}
