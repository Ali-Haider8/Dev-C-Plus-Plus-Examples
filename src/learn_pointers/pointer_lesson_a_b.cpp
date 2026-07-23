#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int b = 10;

    int *ptr = &x;

    *ptr = 100;
    cout << "X = " << x << endl;

    ptr = &b;
    cout << "B = " << b << endl;

    return 0;
}