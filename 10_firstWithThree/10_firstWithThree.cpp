#include <iostream>

int main()
{
    /*Да се напише програма, която намира първите n(n > 1) прости
        числа, които започват с 3*/

    int n;
    int s = 1;
    int sf = 1;
    
    std::cin >> n;

    if (n > 1) {
        n *= n;
        for (int i = 1; i <= n; i++)
        {
            if(i > 1)
                s = pow(10, i-1);
            sf = s * 3; // 3, 30, 300, 3000 ...

            
            if (sf >= 30) {
                if (sf >= n)
                    break;
                for (int j = sf; j < sf + s; j++) 
                {
                    std::cout << j << " ";
                }
            }
            else {
                std::cout << sf << " ";
            }
            
            
            
        }
    }
}
