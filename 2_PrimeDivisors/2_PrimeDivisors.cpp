#include <iostream>

int main()
{
    // if(i == 2 || i % 2 == 1|| i % 3 == 0 && i % 3 == 2) --> odd nums

    int n;
    std::cin >> n;
    
    int result = 0;
    

    if (n >= 2 && n <= 2000) {
        for (int i = 2; i <= n/2; ++i)
        {
            if(n % i == 0)
                if (i == 2 || i % 2 == 1 || i % 3 == 0 && i % 3 == 2) {
                    std::cout << i << " ";
                    result += i;
                }
            
        }
        std::cout << std::endl << "result: " << result << std::endl;
    }
    else {
        std::cout << "Invalid input data!" << std::endl;
    }
}

