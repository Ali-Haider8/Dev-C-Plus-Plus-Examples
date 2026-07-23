#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double c, a, b;

    cout << "Right triangle cal." << "\n" << "--------------------" << endl;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;


    a = pow(a, 2);
    b = pow(b, 2);
    c = sqrt(a + b);

    cout << "The result: " << c;


    return 0;
}