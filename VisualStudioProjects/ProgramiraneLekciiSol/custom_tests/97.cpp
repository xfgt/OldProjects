#include <iostream>
using namespace std;

int main(){

    unsigned char p = 97;
    unsigned char *pointer = &p;
    cout << hex << (int)*pointer << endl;
}