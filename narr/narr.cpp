#include <iostream>

int main()
{
    int size = 0;
    std::cin >> size;
    int* array = new int[size]; // 5 -> MEM: [cd cd cd cd] x 5 = 20; 4bytes x 5 = 20 bytes

    for (int i = 0; i < size; i++)
    {
        array[i] = i;
        std::cout << i << std::endl;
    }

    delete[] array; // [cd]x20 -> [dd] x 20
    array = nullptr; // 0x[address] -> 0x00000000..

    return 0;
}
