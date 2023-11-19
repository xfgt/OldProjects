
#include <iostream>

int main()
{
    int n = 0;
    int num = 0;

    bool boolFirstPositive = false; 
    bool boolSerialPositive = false; 
    bool boolLastPositive = false; 



    int numFirstPositive = 0;
    int numFirstPositivePosition = 0;

    int numSerialPositive = 0;
    int numSerialPositivePosition = 0;

    int numLastPositive = 0;
    int numLastPositivePosition = 0;

    std::cout << "number of elements: "; std::cin >> n;
    if (n > 1 && n < 100) {
        int* arr = new int[n];
        for (int i = 0; i < n; i++)
            arr[i] = NULL;


        int* analyzeArr = new int[n];
        for (int i = 0; i < n; i++)
            analyzeArr[i] = NULL;


        for (int i = 0; i < n; i++)
        {
            std::cout << "element[" << i << "]: "; std::cin >> num;
            arr[i] = num;                
           
        }
        std::cout << std::endl;
        for (int i = 0; i < n; i++)
        {
            std::cout << arr[i] << " ";
            analyzeArr[i] = arr[i];
        }
        std::cout << std::endl;
        for (int i = 0; i < n; i++)
        {
            
            if (analyzeArr[i] > 0) {
                if (boolFirstPositive) {
                    numSerialPositive = analyzeArr[i];
                    numSerialPositivePosition = i;

                    numLastPositive = analyzeArr[i];
                    numLastPositivePosition = i;

                    std::cout << "serialPositive: " << numSerialPositive << " on position: " << numSerialPositivePosition << std::endl;
                }
                else {
                    numFirstPositive = analyzeArr[i];
                    numFirstPositivePosition = i;

                    numLastPositive = analyzeArr[i];
                    numLastPositivePosition = i;

                    std::cout << "firstPositive: " << numFirstPositive << " on position: " << numFirstPositivePosition << std::endl;
                    boolFirstPositive = true;
                }

            }
            if (n - i == 1) {
                std::cout << "lastPositive: " << numLastPositive << " on position: " << numLastPositivePosition << std::endl;
                break;
            }
        }

    } else {
        std::cout << "\nn is out of the range '1 < n < 100'";

    }
}
