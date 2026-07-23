#include <iostream>

using namespace std;

float avg(int n1, int n2, int n3, int n4, int n5) {
    return (n1 + n2 + n3 + n4 + n5) / 5;
}

int main() {
    int n1, n2, n3, n4, n5;

    cout << "Average of Five Numbers cal." << endl;
    cout << "-----------------------------" << endl;
    cout << "\n";

    cout << "Enter num1: ";
    cin >> n1;

    cout << "Enter num2: ";
    cin >> n2;

    cout << "Enter num3: ";
    cin >> n3;

    cout << "Enter num4: ";
    cin >> n4;

    cout << "Enter num5: ";
    cin >> n5;

    cout << "\n";
    cout << "The Average is: " << avg(n1, n2, n3, n4, n5);

    return 0;
}