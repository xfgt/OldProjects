#include <iostream>

bool isPrime(int x)
{
    if (x == 0 || x == 1)
        return false;

    for (int i = 2; i < x; i++)
        if (x % i == 0) return false;

    return true;

}

int main()
{
    int N;
    std::cin >> N;
    for (int i = 0; i < N; i++)
        if(isPrime(i)) std::cout << i << " ";
    return 0;
}
