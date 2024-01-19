
#include <iostream>
using namespace std;

int main()
{
    void* vp;
    char ch = 84, *cp = "NBU";
    int j = 75;
    vp = &ch;
    cout << *(char*)vp;
    vp = &j;
    cout << *(char*)vp;
    vp = cp;
    cout << (char*)vp + 1;
}
