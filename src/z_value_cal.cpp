#include <iostream>

using namespace std;

int main() {
    int x, y, z;

    cout << "Z Value cal." << endl;
    cout << "z=(x*x)+(y/2)" << endl;

    cout << "Enter X: ";
    cin >> x;

    cout << "Enter Y: ";
    cin >> y;

    z = (x * x) + (y / 2);
    cout << "\n" << "Z= " << z;

    return 0;
}