#include <iostream>

using namespace std;

int main() {
    int x;

    cout << "Enter Any Value For X: ";
    cin >> x;

    if (x >= 10)
        cout << "big";
    else
        cout << "small";

    return 0;
}