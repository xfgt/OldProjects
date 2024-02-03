#include <iostream>
#include <cmath>

int fact(int a){
    int mul = 1;
    for (int i = a; i > 1; --i){
        mul *= i;
    }
    return mul;
}

int main()
{
    int x, n, S;
    std::cin >> x >> n;
    for (int i = 0; i <= n; i++){

        S += (pow(x,i) / fact(i));
    }
    std::cout << S << std::endl;
    return 0;
}
