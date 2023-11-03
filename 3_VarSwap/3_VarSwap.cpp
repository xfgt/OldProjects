
#include <iostream>
using namespace std;

int main()
{
    int a, b, aT, bT;

    cin >> a;
    cin >> b;

    aT = a;
    bT = b;

    a = bT;
    b = aT;

    cout << a << endl;
    cout << b << endl;




    return 0;
}
