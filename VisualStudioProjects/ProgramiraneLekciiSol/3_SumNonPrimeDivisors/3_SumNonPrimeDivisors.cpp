
#include <iostream>

int isDivisor(int a, int i) {

    while (i <= a) {
        if (a % i == 0)
            return i;
        return 0;
    }
    return 0;
}

bool isNonPrime(int number) {
    
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            return true;
        }
    }
    return false;
      
}

int main()
{
    int x = 0;
    std::cin >> x;

    int i = 1;
    int sum = 0;

    if (x >= 2 && x <= 2000) {
        while (i < x) {
            int number = isDivisor(x, i);
            if (number != 0) {
                if (isNonPrime(number)) {
                    //std::cout << number << " ";
                    sum += number;
                }
            }
            i++;
        }
        std::cout <<  sum << std::endl;
    }
    else {
        std::cout << "Invalid input data!" << std::endl;
    }

    return 0;

}
