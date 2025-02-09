#include <iostream>

int main()
{
    unsigned int n;
    std::cin >> n;

    int* arr = new int[n];
    for(size_t i = 0; i < n; i++)
        arr[i] = 0;

    for(size_t i = 0; i < n; i++)
        if(i % 2 == 1)
            std::cout << i << " ";

    return 0;
}
