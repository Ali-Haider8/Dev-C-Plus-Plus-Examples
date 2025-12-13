#include <iostream>

using namespace std;

int main() {
    char color;

    cout << "Enter 'g' For Green / 'y' For Yellow: ";
    cin >> color;

    if (color == 'g') cout << "Green";
    else if (color == 'y') cout << "Yellow";
    else cout << "You haven't choice Green Or Yellow";

    return 0;
}