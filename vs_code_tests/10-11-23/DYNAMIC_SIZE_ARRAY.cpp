#include <iostream>



int main() {
    //get array size from user input
    int arraySize = 0;
    std::cin >> arraySize;

    int * array = new int[arraySize]; // IMPORTANT; "new int is an address that's why we have * at the beginning - to get the value of the address"
    // new means "heap", without 'new' it's on the "stack" in memory

    for(int i = 0; i < arraySize; ++i) {
        array[i] = i; //IMPORTANT
        std::cout << array[i] << std::endl;
    }
    // IMPORTANT
    delete[] array; // tell the os we are done with using that memory
    array = nullptr;
    return 0;
}