#include <iostream>
#include <cmath>

int main()
{

    std::cout << "sin\n\n";
    for(float i = 0.00; i <= 1.00; i+=0.01)
        std::cout << "sin (" << i << ") = " << std::sin(i) << std::endl;

    std::cout << "\ncos\n\n";
    for(float i = 0.00; i <= 1.00; i+=0.01)
        std::cout << "cos (" << i << ") = " << std::cos(i) << std::endl;

    return 0;
}
