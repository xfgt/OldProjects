
#include <iostream>
#include <ios>
#include <iomanip>

using namespace std;

int main()
{
    const int M = 4;
    const int N = 5;

    double d[M][N];



    for (int i = 0; i <= M - 1; i++) {
        for (int j = 0; j <= N - 1; j++) {
            cout << setw(10) << d[i][j];
            //      ^^^^^^^
            // useless space of (n) characters
        }
        cout << endl;
    }
}
