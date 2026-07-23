#include <iostream>

using namespace std;

int main() {
    int a[5];


    cout << "Enter Elements: " << endl;

    for (int i = 0; i <= 4; i++)
        cin >> a[i];

    for (int i = 0; i <= 4; i++)
        if (i % 2 == 0)
            cout << a[i] << " ";

    return 0;
}