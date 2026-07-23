#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float x;

    cout << "Square root calculator" << endl;
    cout << "Enter number: ";
    cin >> x;

    x = sqrt(x);
    cout << "The number root is: " << x;
}