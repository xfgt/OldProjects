#include <iostream>

int main(){

    int size = 0;
    std::cin >> size;
    int* array = new int[size];

    for (int i = 0; i < size; i++)
    {
        array[i]=i;
        std::cout << i << std::endl;
    }
    
    delete[] array;
    array = nullptr;

    return 0;
}