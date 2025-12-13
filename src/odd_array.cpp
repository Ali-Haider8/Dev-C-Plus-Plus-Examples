#include <iostream>

using namespace std;

int main() {
    int a[5];

    cout << "Enter Elements: " << endl;

    for (int i = 0; i <= 4; i++)
        cin >> a[i];

    cout << "Odd Elements: " << endl;
    for (int i = 0; i <= 4; i++)
        if (a[i] % 2 == 0)
            cout << a[i] << endl;

    return 0;
}