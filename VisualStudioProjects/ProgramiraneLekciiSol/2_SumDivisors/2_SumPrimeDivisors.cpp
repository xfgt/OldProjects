
#include <iostream>

int isDivisor(int a, int i) {

    while (i <= a) {
        if (a % i == 0)
            return i;
        return 0;
    }
    return 0;
}

bool isPrime(int number) {
    if (number > 1) {
        for (int i = 2; i < number; i++) {
            if (number % i == 0) {
                return false;
            }
        }
        return true;
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
        while (i <= x) {
            int number = isDivisor(x, i);
            if (number != 0) {
                if (isPrime(number)){
                    //std::cout << number << " ";
                    sum += number;
                } 
            }
            i++;
        }
        std::cout << sum << std::endl;
    }
    else {
        std::cout << "Invalid input data!" << std::endl;
    }

    return 0;

}
