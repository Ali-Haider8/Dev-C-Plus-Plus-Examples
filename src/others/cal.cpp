#include <iostream>

using namespace std;

int main() {
    int x, y;

    cout << "Calculator" << endl;
    cout << "------------------";
    cout << "\n";

    cout << "Enter The First Value: ";
    cin >> x;

    cout << "Enter The Second Value: ";
    cin >> y;

    cout << "\n";

    int sum = x + y;
    int sub = x - y;
    int mul = x * y;
    int div = x / y;
    int mod = x % y;

    cout << x << " + " << y << " = " << sum << endl;
    cout << x << " - " << y << " = " << sub << endl;
    cout << x << " * " << y << " = " << mul << endl;
    cout << x << " / " << y << " = " << div << endl;
    cout << x << " % " << y << " = " << mod << endl;

    return 0;
}
