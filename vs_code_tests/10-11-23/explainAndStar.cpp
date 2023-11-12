#include <iostream>

int main(){
    
    int* a = new int(5);

    std::cout << "a: " << a << std::endl;
    std::cout << "*a: " << *a << std::endl;
    std::cout << "&a: " << &a << std::endl;
    std::cout << std::endl;

    delete a;
    a = nullptr;

    std::cout << "a: " << a << std::endl;
    std::cout << "*a: [can't be called]" << std::endl;
    std::cout << "&a: " << &a << std::endl;

    return 0;
}