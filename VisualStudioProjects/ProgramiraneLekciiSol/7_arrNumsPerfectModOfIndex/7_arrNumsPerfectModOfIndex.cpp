
#include <iostream>

int main()
{
    int n = 0;
    int num = 0;
    
    std::cout << "number of elements: "; std::cin >> n;


    int* arr = new int[n];
    for (int i = 0; i < n; i++)
        arr[i] = NULL;

    for (int i = 0; i < n; i++)
    {
        std::cout << "element[" << i << "]: "; std::cin >> num;
        arr[i] = num;
    }
    std::cout << std::endl;
    for (int i = 0; i < n; i++)
    {
        if(i != 0)
            if (arr[i] % i == 0)
                std::cout << arr[i] << " % " << i << " = " << arr[i] % i << std::endl;
    }

}

