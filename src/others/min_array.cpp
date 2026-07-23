#include <iostream>

using namespace std;

int main() {
    int a[5], min;

    cout << "Enter Elements: " << endl;

    for (int i = 0; i <= 4; i++)
        cin >> a[i];

    min = a[0];

    for (int i = 1; i <= 4; i++) {
        if (a[i] < min)
            min = a[i];
    }

    cout << "MIN: " << min;

    return 0;
}