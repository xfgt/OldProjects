
#include <iostream>


int main()
{
    std::string input = "";
    std::cin >> input;
    int sum = 0;

    for (int i = 0; i < input.size(); i++) {
        sum  += input[i] - '0';
    }
    std::cout << sum;
}
