#include <iostream>

using namespace std;

int main() {
    int a[5], max;

    cout << "Enter Values For The Array: " << endl;

    for (int i = 0; i <= 4; i++)
        cin >> a[i];

    max = a[0];

    for (int i = 1; i <= 4; i++)
        if (a[i] > max)
            max = a[i];

    cout << "Max Value in the array: " << max;

    return 0;
}