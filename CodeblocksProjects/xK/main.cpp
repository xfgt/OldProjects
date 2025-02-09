#include <iostream>

int main()
{
    int k;
    std::string x;
    std::string Rx;

    std::cin >> x;
    std::cin >> k;

    if(k >= 1){

        // x = 236
        // k = 2

        // index                [ 0   1   2 ]
        // output:     2        [ 6 , 3 , 2 ]

        // read from right to left <----.

        int temp, i;
        for (i = 0; i < x.size()/2; ++i) {
            temp = x[x.size()-i-1];
            x[x.size()-i-1] = x[i];
            x[i] = temp;
        }

        if(k <= x.size())
            std::cout << x[k];




    }

    return 0;
}
