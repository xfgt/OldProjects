
#include <iostream>
using namespace std;

int main()
{
    int arr[5], i = -1, z;
	while (i < 4)
		arr[i] = ++i;
	for (int i = 0; i < 5; i++)
		cout << arr[i] << ", ";
}
