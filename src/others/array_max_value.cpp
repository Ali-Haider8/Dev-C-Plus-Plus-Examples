#include <iostream>

using namespace std;

int main() {
    // definition
    int a[5], max = a[0];

    // input
    cout << "Enter Elements: " << endl;

    for (int i = 0; i <= 4; i++)
        cin >> a[i];

    // max = a[0];

    for (int i = 1; i <= 4; i++)
        if (a[i] > max)
            max = a[i];

    cout << "Max: " << max;

    return 0;
}
