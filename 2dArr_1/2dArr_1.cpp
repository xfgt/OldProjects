#include <iostream>
using namespace std;

int main()
{
    const int M = 4, N = 5; // 20 lines for input
    double d[M][N];

    /*
        M = y;
        N = x;
    
        [y],[x] = [4],[5];

                x = 5
               .-----
               |aaaaa
       y = 4   |aaaaa
               |aaaaa
               |aaaaa

    */
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++)
            cin >> d[i][j]; // y, x; (j gets value on first input)
    }
}

