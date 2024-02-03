#include <iostream>
#include "../fucntions/myFunctions.cpp"

int main()
{
    char A[] = {6, 11, 8, 7, 15};
    char B[] = {15, 2, 3, 8, 11, 6, 4, 12, 9, 10};
    char C[] = {4, 8, 10};

    int aSize = sizeof(A) / sizeof(A[0]);
    int bSize = sizeof(B) / sizeof(B[0]);
    int cSize = sizeof(C) / sizeof(C[0]);

    std::cout << "Max A: " << getMax(A, aSize) << std::endl;
    std::cout << "Max B: " << getMax(B, bSize) << std::endl;

    std::cout << "Min A: " << getMin(A, aSize) << std::endl;
    std::cout << "Min B: " << getMin(B, bSize) << std::endl;


    return 0;


}
