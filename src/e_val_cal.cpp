#include <iostream>

using namespace std;

int main() {
    float x, y, z, e;

    cout << "e value cal." << "\n"
            << "-------------" << "\n"
            << endl;
    cout << "e=(2xy/x+y)+(2x/x(x-z))" << "\n"
            << endl;

    cout << "Enter X: ";
    cin >> x;

    cout << "Enter Y: ";
    cin >> y;

    cout << "Enter Z: ";
    cin >> z;

    e = 2 * x * y / (x + y) + 2 * x / (2 * (x - z));

    cout << "\n"
            << "X = " << x << "\n"
            << "Y = " << y << "\n"
            << "Z = " << z << "\n"
            << endl;
    cout << "e = " << e;

    return 0;
}