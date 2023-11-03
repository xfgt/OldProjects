#include <iostream>
#include <string>


int main()
{
    /* input - MMMDCCCLXXXVIII
        [3]  [4]  [4]  [4]   
        MMM DCCC LXXX VIII - 3888 
    */

    std::string inputStr;
    std::cin >> inputStr;

    int value = 0;
    
    for (int i = 0; i < inputStr.size(); i++) {

        switch (inputStr[i])
        {
        case 'M':
            if (i > 0) {
                if (inputStr[i - 1] == 'C') {
                    value += 800;
                }
                else {
                    value += 1000;
                }
            }
            else {
                value += 1000;
            }
            break;

        case 'D':
            if (inputStr[i - 1] == 'C') {
                value += 300;
            }
            else {
                value += 500;
            }
            break;

        case 'C':
            if (inputStr[i - 1] == 'X') {
                value += 80;
            }
            else {
                value += 100;
            }
            break;
            
            break;

        case 'L':
            if (inputStr[i - 1] == 'X') {
                value += 30;
            }
            else {
                value += 50;
            }
            break;

        case 'X':
            if (inputStr[i - 1] == 'I') {
                value += 8;
            }
            else {
                value += 10;
            }
            break;


        case 'V':
            if (inputStr[i - 1] == 'I') {
                value += 3;
            }
            else {
                value += 5;
            }
            break;

        case 'I':
            value += 1;
            break;
            

        }
    }
    
    std::cout << value;
    

    return 0;
}
