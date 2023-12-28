#include <iostream>

int main()
{
    int n;
    int num;
    int targetNum;
    std::cin >> n;
    std::cin >> targetNum;
    bool isThere = false;
    if(n >= 1){
        int * arr = new int [n];
        for(int i = 0; i < n; i++)
            arr[i] = 0;

        for(int i = 0; i < n; i++){
            std::cin >> num;
            arr[i] = num;
        }
        int meet = 0;


        for(int i = 0; i < n; i++){
            if(arr[i] == targetNum)
            {
                isThere = true;
                break;
            }
        }

    }
    if(isThere)
        std::cout << "yes" << std::endl;
    else
        std::cout << "no" << std::endl;
    return 0;
}
