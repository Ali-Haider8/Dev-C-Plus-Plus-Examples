#include <iostream>

using namespace std;

int cube(int x) {
    return x = x * x * x;
}

int main() {
    int x;

    cout << "Cube cal." << "\n"
            << "-------------" << endl;

    cout << "Enter the number: ";
    cin >> x;
    cout << "The result: " << cube(x);

    return 0;
}