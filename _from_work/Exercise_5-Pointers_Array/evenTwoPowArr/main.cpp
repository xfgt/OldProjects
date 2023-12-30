#include <iostream>
#include <cmath>

int main()
{
    int n;
    std::cin >> n;

    if(n > 0){
        int * arr = new int [n];
        for (int i = 0; i < n; i++)
            arr[i] = 0;

        for (int i = 1; i <= n; i++)
            std::cout << pow(2, i) << " ";
    }

    return 0;
}
