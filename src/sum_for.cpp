#include <iostream>

using namespace std;

int main() {
    int sum = 0;

    cout << "Print Sum of numbers from 1 to 10" << endl;

    for (int i = 1; i <= 10; i++) sum = sum + i;
    cout << "Sum: " << sum;

    return 0;
}