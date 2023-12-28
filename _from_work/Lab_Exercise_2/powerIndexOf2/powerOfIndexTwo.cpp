#include <iostream>
#include <cmath>

int main()
{
    int x = 0;
    std::cout << "x: "; std::cin >> x;

    if(x != 0){
       float log_two_x = log2(x);

        if(round(log_two_x) == log_two_x){
            std::cout << "yes";
        } else{
            std::cout << "no";
        }
    }


    return 0;
}
