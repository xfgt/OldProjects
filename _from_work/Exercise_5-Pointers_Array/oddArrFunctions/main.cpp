#include <iostream>

void makeOdd (int arr[], int arrSize){

    std::cout << "odd array: ";
    int oddsCount = arrSize / 2;
    int sumOdds = 0;


    for (int i = 0; i < arrSize; i++){
        if( i % 2 == 1){
            std::cout << arr[i] << " ";
            sumOdds += arr[i];
        }
    }
    int avgOdds = sumOdds / oddsCount;

    std::cout << "\ncount of odd nums: " << oddsCount << std::endl;
    std::cout << "avg odd nums: " << avgOdds << std::endl;
    std::cout << "lowestValue of arr: " << arr[1] << std::endl;
    std::cout << "highest of arr: " << arr[arrSize-1] << std::endl;
}




int main()
{
    int n;
    std::cin >> n;

    int* A = new int[n];
    for(int i = 0; i < n; i++)
        A[i] = 0;

    int j = 0;
    for(int i = 0; i < n; i++){
        A[j] = i;
        j++;
    }


    makeOdd(A, n);
    return 0;
}
