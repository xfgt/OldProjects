#include <iomanip>
#include <iostream>
#include <cmath>

int main()
{
    /** a = 612 **/
    /** x = 10  **/
    long double a = 0;
    std::cout << "a = "; std::cin >> a;

    long double x = 0;
    std::cout << "x = "; std::cin >> x;

    long double lastX = 0;
    int i = 0;

    if(a > 0){
        while (i <= 100)
        {
            lastX = x;
            x = lastX - (pow(lastX, 2) - a) / (2 * lastX);
            i++;
        }
            std::cout << std::setprecision(9) << x << std::endl; // wikipedia (x5)
    }


    return 0;
}
