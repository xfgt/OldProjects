
#include <iostream>
#include <stdlib.h> // rand, srand
#include <time.h>

int main()
{
    int x, y;
    std::cin >> x >> y;

    int iSecret;
    srand(time(NULL));

    iSecret = rand() % x + y;

    std::cout << iSecret << std::endl;
    return 0;
}
