
#include <iostream>

int isDivisor(int a, int i) {
    
    while (i <= a) {
        if (a % i == 0)
            return i;
        return 0;
    }
    return 0;
}


int main()
{
    int x = 0;
    std::cin >> x;

    int i = 1;
    int count = 0;
    if (x >= 2 && x <= 2000) {
        while (i <= x) {
            if (isDivisor(x, i) != 0) {
                std::cout << isDivisor(x, i) << " ";
                count++;
            }
            i++;
        }
        std::cout << count << std::endl;
    }
    else {
        std::cout << "Invalid input data!" << std::endl;
    }
    
    return 0;
    
}
