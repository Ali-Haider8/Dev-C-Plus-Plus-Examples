#include <iostream>

using namespace std;

int main() {
    int x;

    cout << "Enter Number: ";
    cin >> x;

    switch (x) {
        case 1: cout << "One";
            break;
        case 2: cout << "Two";
            break;
        case 3: cout << "Three";
            break;
        case 4: cout << "Four";
            break;
        default: cout << "You haven't enter number between 0 and 5";
    }

    return 0;
}