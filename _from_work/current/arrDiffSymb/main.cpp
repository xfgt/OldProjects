#include <iostream>

int main()
{
    int n;
    int searchedN;
    int num;
    int lastNum = 0;


    std::cout << "size = "; std::cin >> n;
    std::cout << "searched num = "; std::cin >> searchedN;


    int* arr = new int [n];
    for(int i = 0; i < n; i++)
        arr[i] = 0;

    std::cout << "enter array: \n";
    for(int i = 0; i < n; i++){
        std::cin >> num;
        arr[i] = num;

    }

    for(int i = 0; i < n; i++){
        if(i>0){
            if(arr[i] != searchedN)
                std::cout << "diff num on index " << i << std::endl;
        }
    }

    return 0;
}
