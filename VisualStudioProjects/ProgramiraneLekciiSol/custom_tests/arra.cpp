#include <iostream>

int main()
{
    const int ARRAY_SIZE = 5;
    int array[ARRAY_SIZE];
    for(int i = 0; i < ARRAY_SIZE; ++i)
    {
        array[i] = i; // important for 'i' values
        std::cout << array[i] << std::endl;
    }
    return 0;
}