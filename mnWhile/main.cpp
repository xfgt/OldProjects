#include <iostream>

int main()
{
    int m = 0;
    int n = 0;
    std::cin >> m >> n;

    int sum = 0;

    if (m > 9 && n > 9){
        do{
            sum += m;
            m++;
        }while(m <= n);

    }
    std::cout << sum << std::endl << std::endl;
    return 0;
}
