#include <iostream>

using namespace std;

int main() {
    float pi, r, area, primeter;

    pi = 3.14;

    cout << "Cirlce cal. \n-------------\n";
    cout << "Enter (r) of Circle: ";
    cin >> r;

    area = pi * r * r;
    primeter = 2 * pi * r;

    cout << "Area: " << area << "\n"
            << "Primeter: " << primeter;

    return 0;
}