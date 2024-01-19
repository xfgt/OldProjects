
#include <iostream>


int main()
{
    int n = 0;
    int num = 0;

    std::cin >> n;

    

    if (n > 1 && n < 100) {

        int* A = new int[n];
        for (int i = 0; i < n; i++)
            A[i] = NULL;

        for (int i = 0; i < n; i++)
        {
            std::cin >> num;
            A[i] = num;

            if (A[i] < i)
                A[i] = pow(A[i], 2);

            if (A[i] == i)
                A[i] *= (-1);

            if (A[i] > i)
                A[i] -= 1;


        }
        std::cout << std::endl;
        for (int i = 0; i < n; i++)
        {
            std::cout << A[i] << " ";
        }

    }

}
