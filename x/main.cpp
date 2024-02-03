#include <iostream>
#include <string>
#include <cstdlib>

int main()
{
    std::string x;
    std::cin >> x;


    size_t i = 0;
    int num = 0;
    int sum = 0;
    int mul = 1;




    for (i = 0; i < x.size(); i++){
        num = x[i] - '0';
        sum += num;
        mul *= num;
    }

    std::cout << sum << std::endl;
    std::cout << mul << std::endl;


    return 0;
}
