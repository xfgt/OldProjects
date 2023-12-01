#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    
    int result = 0;
    

    if (n >= 2 && n <= 2000) {
        for (int i = 2; i <= n/2; i++)
        {
            if (i > 1) {
                if(i % 2 == 1 || .)
                    std::cout << i << " ";
            }
            
            
        }
        std::cout << std::endl << "result: " << result << std::endl;
    }
    else {
        std::cout << "Invalid input data!" << std::endl;
    }
}

