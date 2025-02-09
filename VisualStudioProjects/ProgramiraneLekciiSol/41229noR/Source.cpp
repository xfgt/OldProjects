#include <iostream>

bool isPrime(int number) { // if number > 1 ?
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {

    int n = 0;
    std::cin >> n;


    int count = 0;
    if (n > 999) {

        if (isPrime(n))
            std::cout << n << " is prime!" << std::endl;
        else 
            std::cout << n << " is not prime.." << std::endl;
        
        
        std::cout << std::endl;

        for (int i = 2; i <= 9; i++)
        {
            if (n % i == 0) {
                printf("%d %% %d = %d\n", n, i, n % i);
                count++;
            }
            
        }

        printf("\n%d divides with no reminder %d times!\n", n, count);

    }


	return 0;
}