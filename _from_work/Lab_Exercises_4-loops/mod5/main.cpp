#include <iostream>
#include <cmath>

int main()
{
    unsigned int n;
    std::cin >> n;

    int eq = 0;
    for(int i = 1; i < n; i++){
        eq =  pow(i,3) + 3*i + pow(n, 3);
        if(eq % 5 == 0){
            std::cout << i << ": " << eq;
            return true;
        }
    }
    return false;
}
