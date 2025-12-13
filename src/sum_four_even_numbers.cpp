#include<iostream>

using namespace std;

int main() {
    int x, sum;

    cout << "Find Sum of four even numbers" << endl;

    for (int i = 1; i <= 4; i++) {
        cout << "Enter even number: ";
        cin >> x;

        if (x % 2 == 0) sum = sum + x;
    }

    cout << "Sum: " << sum;

    return 0;
}