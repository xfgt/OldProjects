#include <iostream>
#include <cmath>


int main()
{
    // i^3 + 7*i^2 + n^3  = 1, 2, ..., n

    int n, m;
    std::cin >> n >> m;
    int result = 0;
    if(n >= 1){
        if(m > 1){

            for (int i = 1; i <= n; i++){
                result = pow(i,3) + (7 * pow(i, 2)) + pow(n,3);
                    std::cout << result << std::endl;
                if(result % m == 0)
                    std::cout << result << std::endl;
            }







        }
    }
    return 0;
}
