#include <iostream>

int main()
{
    int n;
    int num;
    std::cin >> n;

    int* arr = new int[n];

    for(size_t i = 0; i < n-1; i++)
        arr[i] = 0;

    for(size_t i = 0; i < n; i++){
        std::cin >> num;
        arr[i] = num;
    }

    for(int i = n-1; i >= 0; i--)
        std::cout << arr[i] << " ";

    return 0;
}
