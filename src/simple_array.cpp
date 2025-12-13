#include <iostream>

using namespace std;

int main() {
    // defineation
    int a[5];

    // input
    cout << "Enter Elements: " << "\n";

    for (int i = 0; i <= 4; i++)
        cin >> a[i];


    // processing 
    // output
    for (int i = 0; i <= 4; i++)
        cout << a[i] << ", ";

    return 0;
}