#include <iostream>
using namespace std;

int main() {

    int i = 0;
    int n = 0;
    int arr[100];

    cin >> n;

    for (i = 0; i < n; ++i) {

        cin >> arr[i];
    }

    for (i = 1; i < n; ++i) {

        if (arr[0] < arr[i])
            arr[0] = arr[i];
    }

    cout << arr[0] << endl;

}
