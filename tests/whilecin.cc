#include <iostream>

int main(){

    char inp[10];
    while(std::cin.getline(inp, 9)){
        std::cout << inp << std::endl;
    }
    
}