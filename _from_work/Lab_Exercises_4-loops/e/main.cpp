#include <iostream>
#include <cmath>
#include <limits>

int fact (int a){
    int result = 1;

    while(a >= 1){
        result *= a;
        a--;
    }
    return result;
}
int main()
{
    // x^i / i!
    // i % 3 == 1
    float x;
    int i = 1;
    int j = 1;

    float S = 0;
    float lastS = 0;
    std::cin >> x;
    float fMAX = std::numeric_limits<float>::max();
    float calc = 0;

    if(x >= -1 && x <= 1){
        while(calc <= fMAX){
            calc = pow(x, j) / fact(j);
            //std::cout << "calc: "<< calc << std::endl;


            if(i == 1 || i % 2 == 1){
                S+= calc;
                if(S == lastS)
                    break;
                //std::cout << i << "(+): "<< S << std::endl<< std::endl;
            }
            else if (i % 2 == 0){
                S-= calc;
                if(S == lastS)
                    break;
                //std::cout << i << "(-): "<< S << std::endl<< std::endl;
            }


            lastS = S;
            i++;
            j+=2;
        }
    }
    std::cout << S << std::endl;
    return 0;
}
