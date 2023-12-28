#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int i = n;

    while(i > 1){
        i--;
        n *= i;
    }
        std::cout << n << std::endl;
    return 0;
}
