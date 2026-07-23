#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x = 3;
    double y = 4;
    double z;


    // 3,4 -- max: 4
    z = max(x, y);
    cout << "Max: " << z << endl;

    // 3,4 -- min: 3
    z = min(x, y);
    cout << "Min: " << z << endl;

    // 2^4 to 16
    z = pow(2, 4);
    cout << "Power: " << z << endl;

    // 9 to 3
    z = sqrt(9);
    cout << "Sqrt: " << z << endl;


    // from -x to x
    z = abs(-3);
    cout << "Abs: " << z << endl;

    // to bigger if 3.5 or more
    // to smaller if 3.4 or less
    // 3.5 to 4
    // 3.4 to 3
    z = round(3.5);
    cout << "Round: " << z << endl;


    // to the bigger
    // 3.1 to 4
    // -3.9 to -3
    z = ceil(-3.9);
    cout << "Ceil: " << z << endl;

    // to the smaller
    // 3.01 to 3
    // -3.9 to -4
    z = floor(-3.1);
    cout << "Floor: " << z << endl;


    return 0;
}