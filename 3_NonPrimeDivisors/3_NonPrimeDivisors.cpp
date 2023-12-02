#include <iostream>
bool isNonPrime(int n)
{
    if (n == 1 || n == 0) return true;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0) return true;
    }

    return false;
}
int main()
{
    int n;
    std::cin >> n;

    int result = 0;

    if (n >= 2 && n <= 2000) {
        for (int i = 2; i <= n; i++)
        {
            if (isNonPrime(i))
                if (n % i == 0 && i != n) 
                    result += i;
        }


        std::cout << result << std::endl;

    }
    else {
        std::cout << "Invalid input data!" << std::endl;
    }
}

