#include <iostream>

int main()
{

    int defaultSize = 5;
    int* iArr = new int[defaultSize];
    for (size_t i = 0; i < defaultSize; i++)
        iArr[i] = 0;

    int number = 1;
    int counter = 0;

    while(number != 0){
        if(counter > defaultSize){
            defaultSize++;
            iArr[counter] = 0;
        }
        std::cin >> number;
        if(number > 9){
            iArr[counter] = number;
            counter++;
        }

    }
    int sum = 0;
    int avgCounter = 0;
    for (size_t i = 0; i < defaultSize; i++){
        if(iArr[i] == 0)
        {
            avgCounter = 1;
            break;
        }
        else{
            sum += iArr[i];
            avgCounter++;
        }
    }


    std::cout  << sum / avgCounter << std::endl;






    return 0;
}
