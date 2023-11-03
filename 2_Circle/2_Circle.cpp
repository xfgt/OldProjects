
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int r, Circumference, area;
    cin >> r;

    Circumference = 2 * M_PI * r;
    area = M_PI * pow(r, 2);

    cout << "Circumference = " << Circumference << endl;
    cout << "Area = " << area << endl;

    return 0;
}
