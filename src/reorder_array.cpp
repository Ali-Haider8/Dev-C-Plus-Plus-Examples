#include <iostream>

using namespace std;

int main() {
    int a[5], t;

    cout << "Enter Elements: " << endl;

    for (int i = 0; i <= 4; i++)
        cin >> a[i];

    cout << "Elements before change: " << endl;
    for (int i = 0; i <= 4; i++)
        cout << a[i] << " ";
    cout << "\n";


    for (int k = 0; k <= 3; k++)
        for (int j = k + 1; j <= 4; j++)
            if (a[j] < a[k]) {
                t = a[k];
                a[k] = a[j];
                a[j] = t;
            }


    cout << "Elements after change: " << endl;
    for (int i = 0; i <= 4; i++)
        cout << a[i] << " ";

    return 0;
}