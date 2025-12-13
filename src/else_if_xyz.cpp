#include <iostream>

using namespace std;

int main() {
    int x, y, z;

    cout << "Enter Three Values for X, Y and Z" << endl;
    cin >> x;
    cin >> y;
    cin >> z;

    cout << "\nThe Largest Number is: ";

    if (x > y && x > z)
        cout << x;
    else if (y > x && y > z)
        cout << y;
    else if (z > x && z > y)
        cout << z;
    else
        cout << x << "=" << y << "=" << z;

    return 0;
}