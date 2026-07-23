#include <iostream>

using namespace std;

int main() {
    char operation;

    int x1, x2;

    cout << "Simple Calculator" << "\n" << endl;
    cout << "Enter The First Number: ";
    cin >> x1;
    cout << "Enter The Second Number: ";
    cin >> x2;

    cout << "\n" << "Choose One From Available Operations (+, -, *, /, %): ";
    cin >> operation;

    switch (operation) {
        case '+': cout << "Sum: " << x1 + x2;
            break;
        case '-': cout << "Sub: " << x1 - x2;
            break;
        case '*': cout << "Mul: " << x1 * x2;
            break;
        case '/': cout << "Div: " << x1 / x2;
            break;
        case '%': cout << "Mod: " << x1 % x2;
            break;

        default: cout << "Please Enter One of Available Operationes";
    }

    return 0;
}