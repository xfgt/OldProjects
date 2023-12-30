#include <iostream>

int main()
{
    int n, a, d;
    std::cout << "n = "; std::cin >> n;
    std::cout << "a = "; std::cin >> a;
    std::cout << "d = "; std::cin >> d;

    if(n > 1 && a > 0 && d > 0){

        int* c = new int[n];
        for (int i = 0; i < n; i++)
            c[i] = 0;

        int i = 0;
        for (int k = a; k < n; k+=d){
            c[i] = k;
            std::cout << c[i] << " ";
            i++;
        }

        /** example: [ (à), (à + d), (à + 2d), (à + 3-d), .... ]
                                                    ^
                                                    |
                                    note: it might be (a + 3d) instead
        **/

    }
    return 0;
}
