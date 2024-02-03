// Online C++ compiler to run C++ program online
#include <iostream>


int fact(int n){
    // n! = n * n-1 ... 1
    int a = n;
    int t = 1;
    while (a > 1){
        t *= a;
        a--;
    }
    
    return t;
}
int nCk(int n, int k){
    int result = fact(n) / (fact(k)*fact(n-k));
    return result;
}

int main() {
    
    int x, y;
    while (std::cin >> x >> y) {
        std::cout << "result = " << nCk(x, y) << std::endl;
    }
    

    return 0;
}