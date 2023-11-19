
#include <iostream>

int main()
{


    /*
        програма, която намира броя на четните елементи с нечетен пореден номер на масива,
        които принадлежат на интервала [р, q]
    */

    int n = 0;
    int num = 0;
    int countEvenOnOddPos = 0;
    std::cout << "number of elements: "; std::cin >> n;

    if (n > 1 && n < 100) {

        int* oneDArr = new int[n];
        for (int i = 0; i < n; i++)
            oneDArr[i] = NULL;

        for (int i = 0; i < n; i++)
        {
            std::cout << "element[" << i << "]: "; std::cin >> num;
            oneDArr[i] = num;
        }

        std::cout << "all even nums from odd positions of the array: " << countEvenOnOddPos << std::endl;
    }
    else {
        std::cout << "\nn is out of the range '1 < n < 100'";
        
    }
    
    
}
