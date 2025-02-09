#include <iostream>
bool isPrime(int n)
{
    if (n == 1 || n == 0) return false;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0) return false;
    }
    
    return true;
}
int main()
{
    int n;
    std::cin >> n;
    
    int result = 0;
    
    if (n >= 2 && n <= 2000) {
        for (int i = 1; i <= n; i++)
        {
            if (isPrime(i))
                if (n % i == 0)
                    result += i;
            
        }


        std::cout << result << std::endl;

    }
    else {
        std::cout << "Invalid input data!" << std::endl;
    }
}

