#include <iostream>

using namespace std;

int main() {
    int x, y, z;

    cout << "Values Switching" << "\n" << "-----------" << "\n\n";

    cout << "Enter val 1: ";
    cin >> x;
    z = x;
    cout << "Enter val 2: ";
    cin >> y;
    x = y;

    y = z;

    cout << "\n" << "The val 1: " << x << "\n" << "The val 2: " << y;

    return 0;
}