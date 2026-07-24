#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int &ref = x; // ref is alternate name for x

    cout << "x: " << x << endl;
    cout << "ref: " << ref << endl;

    ref = 50; // change ref = change x

    cout << "After editing: " << endl;
    cout << "x: " << x << endl;
    cout << "ref: " << ref << endl;

    return 0;
}