#include <iostream>
using namespace std;
int main(){

    int *p1 = 0, *p2 = NULL;
    int h = 10;
    p1 = &h;
    p2 = p1;
    cout << *p2 << endl; // &h
    
}