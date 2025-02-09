#include <iostream>
using namespace std;

int main(){
    void *v;

    int *p;
    int i = 0, j = 1;
    v = &i;
    p = (int*)v;
    cout << *p << endl; // 0

// from here 'p' gets a new value.

    p = &j;
    v = p;
    cout << *(int*)v << endl; // 1
}