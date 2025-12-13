#include <iostream>

using namespace std;

int main() {
    char x, y, z;

    cout << "Enter First Character: ";
    cin >> x;
    cout << "Enter Second Character: ";
    cin >> y;

    z = x;
    x = y;
    y = z;

    cout << "The First Char is: " << x << endl;
    cout << "The Seoncd Char is: " << y;

    return 0;
}