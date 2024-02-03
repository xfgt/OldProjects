#include <iostream>

int main()
{
    /**
        month 1 - 1000 + 1% -> 1010
        month 2 - 1010 + 2% -> 1030.2
    **/


    float deposit = 1000;
    float p = 0.00;
    std::cin >> p;


    int i = 1;


    int month = 0;
    do{
        if(p > 0 && p <= 25){
            deposit += deposit * (p * 0.01);
            std::cout << deposit << std::endl;
            month++;
        }

    } while (deposit < 1100);

    std::cout << std::endl<< month << " months!" << std::endl;
    std::cout << deposit << std::endl;

    return 0;
}
