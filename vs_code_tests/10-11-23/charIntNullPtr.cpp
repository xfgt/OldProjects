#include <iostream>

int main()
{
    int intValue = 0; //32bits = 4 bytes
    char charValue = 'a'; //8 bits = 1 byte

    std::cout << "sizeof(int): " << sizeof(int) << '\n';
    std::cout << "sizeof(char): " << sizeof(char) << '\n';

    //On 32-bit machine sizeof pointer is 32 bits ( 4 bytes),
    //while on 64 bit machine it's 8 byte.

    int * intPointer = nullptr;
    char * charPointer = nullptr;
    std::cout << "sizeof(int *): " << sizeof(int*) << '\n'; 
    std::cout << "sizeof(char *): " << sizeof(char*) << '\n';

    
    intPointer = & intValue;
    * intPointer = 10;
    
    charPointer = & charValue;
    * charPointer = 'Z';


    std::cout << "intValue is " << intValue << '\n';
    std::cout << "charValue is " << charValue << '\n';
    return 0;
}