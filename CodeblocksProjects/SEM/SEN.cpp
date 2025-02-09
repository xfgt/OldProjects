// sum even numbers
#include <iostream>

int main()
{
    std::string raw_input = "";
    std::cin >> raw_input;

    int *chArr = new int [raw_input.size()];
    for (size_t i = 0; i < raw_input.size(); i++)
        chArr[i] = 0;

    for (size_t i = 0; i < raw_input.size(); i++)
        chArr[i] = raw_input[i] - '0'; // from ascii to int value


    int sum = 0;
    for (size_t i = 0; i < raw_input.size(); i++)
    {
        if(chArr[i] % 2 == 0){
            std::cout << chArr[i] << std::endl;
            sum += chArr[i];
        }
    }
    std::cout << sum << std::endl;
    delete[] chArr;

    return 0;
}
