/*

    1010101010
    0000011111  [bitmask]

    output:
    1010100000
*/


#include <iostream>



void printArr(char* inputArr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << inputArr[i];
    }
    std::cout << std::endl;
}

char* cutWBitmask(char* inputArr, char* bitmask, int size) {
    char* output = new char[size];

    for (int i = 0; i < size; i++) {
        if (bitmask[i] == '0') {
            output[i] = inputArr[i];
        }
        else if (bitmask[i] == '1') {
            output[i] = '0';
        }
    }

    return output;
}
int main()
{
    const int size = 11; // 10 + 1
    char inputArr[size];
    char bitmask[size];
    char* outputArr = new char[size];

    std::cin.getline(inputArr, size);
    std::cin.getline(bitmask, size);

    outputArr = cutWBitmask(inputArr, bitmask, size);

    printArr(outputArr, size-1);
    return 0;
}
