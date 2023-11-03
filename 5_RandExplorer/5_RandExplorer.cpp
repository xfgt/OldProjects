
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
    
    if (iSecret > 99) {
        std::cout << iSecret << std::endl;
    }
    else {
        std::cout << iSecret;
    }


    return 0;
}
