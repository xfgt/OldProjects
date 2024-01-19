
#include <iostream>
using namespace std;

int main()
{
    double* pi = new double;
    double* r = new double;
    *pi = 3.1415962;
    *r = 10.0;
    cout << "L: " << 2 * *pi * *r << endl;
    delete pi;
    delete r;

    pi = NULL; // &pi
    r = NULL;  // &r
}
