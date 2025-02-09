#include <iostream>

int main(){
    
    int a = 1;
    float f = 0.56; //f
    double d = 1.65; //lf
    char c = 'c';
    std::string str = "fvbhwpfiohwv";


    printf("int: %d\nfloat: %.2f\ndouble: %.2lf\nchar: %c\n", a, f, d, c);
    std::cout << "String: " << str + '\n';
}