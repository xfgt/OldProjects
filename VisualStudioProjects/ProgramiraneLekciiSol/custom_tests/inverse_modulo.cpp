#include <iostream>
using namespace std;
 
// A naive method to find modular
// multiplicative inverse of 'A'
// under modulo 'M'
 
int modInverse(int A, int M)
{
    for (int X = 1; X < M; X++)
        if (((A % M) * (X % M)) % M == 1)
            return X;
}
 
// Driver code
int main()
{
    int A, M;

    while(true) {
        cin >> A >> M;

        // Function call
        cout << "inv: " <<  modInverse(A, M) << endl;
    }
    
    return 0;
}