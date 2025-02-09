
#include <iostream>
void printArr(char* inputArr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << inputArr[i];
    }
    std::cout << std::endl;
}

int checkSym(char* arrA, char* arrB, int sizeA, int sizeB) {
    int match = 0;
    int fullSize = sizeA + sizeB;

    int smallerSizeArr = (sizeA < sizeB) ? sizeA : sizeB;
    int largerSizeArr = (sizeA > sizeB) ? sizeA : sizeB;
    char* smallerArr = ( (sizeof(arrA) / sizeof(arrA[0]) == smallerSizeArr) ) ? arrA : arrB;
    char* largerArr = ( (sizeof(arrA) / sizeof(arrA[0]) != smallerSizeArr) ) ? arrA : arrB;

    for (int i = 0; i < smallerSizeArr; i++) {
        
        for (int j = 0; j < fullSize; j++) {
            if (smallerArr[i] == largerArr[j] && largerArr[j] != '\0') {
                match+=2;
            }

        }
        
    }
    return fullSize - match;
}

int main()
{
    unsigned const int arraySize = 20; // 0 - 20
    
    char A[arraySize];
    char B[arraySize];
    char C[arraySize];

    int aSize = 0;
    int bSize = 0;

    std::cin >> aSize >> bSize;
    if (aSize >= 0 && aSize <= arraySize && bSize >= 0 && bSize <= arraySize) {
        for (int i = 0; i < aSize; i++) {
            std::cin >> A[i];
        }
        for (int i = 0; i < bSize; i++) {
            std::cin >> B[i];
        }

        int matches = checkSym(A, B, aSize, bSize);

        std::cout << matches << std::endl;
    }
    else {
        std::cout << "Invalid input data!" << std::endl;
    }
        
    
    return 0;
}
