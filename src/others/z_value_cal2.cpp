#include <iostream>

using namespace std;

int main() {
    int x, y, z;

    cout << "Z Value Cal_2" << "\n" << "------------" << "\n";
    cout << "z=x+1/(y+2)" << endl;

    cout << "Enter X: ";
    cin >> x;

    cout << "Enter Y: ";
    cin >> y;

    z = x + 1 / (y + 2);
    cout << "\n" << "Z = " << z;

    return 0;
}