#include <iostream>
#include <math.h>


int main()
{
    int x, y, z, avg, avg_sqrt;

    std::cin >> x;
    std::cin >> y;
    std::cin >> z;

    avg = (x + y + z) / 3;
    avg_sqrt = sqrt(avg);

    std::cout << avg_sqrt << std::endl;
}

