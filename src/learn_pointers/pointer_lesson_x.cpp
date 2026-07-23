#include <iostream>
using namespace std;

int main() {
    int x = 10;    // normal variable
    int *ptr = &x; // pointer for x

    cout << "X value = " << x << endl;
    cout << "X address = " << &x << endl;         // & = address of
    cout << "ptr value = " << ptr << endl;        // same address
    cout << "Value using ptr = " << *ptr << endl; // * = dereference

    *ptr = 50; // change x value using pointer
    cout << "New X = " << x << endl;

    return 0;
}