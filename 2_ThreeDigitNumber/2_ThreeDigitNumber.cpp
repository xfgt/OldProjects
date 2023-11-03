#include <iostream>

#include <string.h>

int main()
{
    /*  
    * input: '123'
    * 1 - hundreds
    * 2 - tens
    * 3 - digits
    */

    char x[4]; // 3+1
    std::cin >> x;
    
    char hundreds = x[0];
    char tens = x[1];
    char ones = x[2];
    
    std::cout << x[0] << " - hundreds " << std::endl;
    std::cout << x[1] << " - tens " << std::endl;
    std::cout << x[2] << " - ones " << std::endl;

    return 0;

}