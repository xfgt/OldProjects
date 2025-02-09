#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int i = 1;
    int div = 0;
    
    if (n >= 2 && n <= 2000) {
        while (i <= n) {
            if (n % i == 0) {
                div++;
            }

            i++;
        }
        std::cout << div;
    }
    else {
        std::cout << "Invalid input data!" << std::endl;
    }
}

