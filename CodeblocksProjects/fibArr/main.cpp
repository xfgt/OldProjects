#include <iostream>

int main()
{
    int n, a, b;
    std::cin >> n >> a >> b;

    if(n > 2){

        int* arr = new int[n];
        for(int i = 0; i < n; i++)
            arr[i] = 0;

        arr[0] = a;
        arr[1] = b;
        std::cout << arr[0] << " " << arr[1] << " ";

        for(int i = 2; i < n; i++){
            arr[i] = arr[i-1] + arr[i-2];
            std::cout << arr[i] << " ";
        }

    }
    return 0;
}
