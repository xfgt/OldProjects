
#include <iostream>

int main()
{
    int n = 0;
    int num = 0;

    bool firstPositive = false; 
    bool serialPositive = false; 
    bool lastPositive = false; 

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
                
                if (firstPositive && serialPositive) {
                    firstPositive = true;
                    numLastPositive = analyzeArr[i];
                    numLastPositivePosition = i;
                    std::cout << "\nSERIAL POSITIVE HIT!: " << analyzeArr[i] << "\nPOSITION: " << i << std::endl;
                }
                else if (firstPositive = true) {
                    serialPositive = true;
                    std::cout << "\nFIRST POSITIVE HIT!: " << analyzeArr[i] << "\nPOSITION: " << i << std::endl;

                }

                if (n - i == 1) {
                    std::cout << "\nTHE LAST POSITIVE HIT!: " << numLastPositive << "\nPOSITION: " << numLastPositivePosition << std::endl;
                }
                
                
                
               

                
            }
        }

    } else {
        std::cout << "\nn is out of the range '1 < n < 100'";

    }
}
