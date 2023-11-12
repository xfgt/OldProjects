#include <iostream>

int main(){

    int* i = new int(5);

    std::cout << *i << std::endl;
    delete i;
    
}