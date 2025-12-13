#include<iostream>

using namespace std;

int main() {
    int x, sum;
    cout << "Find The sum of five odd numbers" << "\n" << "that entered by user" << "\n" << "-----------" << "\n";
    for (int i = 1; i <= 5; i++) {
        cout << "Enter Odd Number: ";
        cin >> x;
        sum = sum + x;
    }

    cout << "Sum: " << sum;


    return 0;
}