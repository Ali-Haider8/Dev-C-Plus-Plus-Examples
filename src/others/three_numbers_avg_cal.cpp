#include <iostream>

using namespace std;

void get_avg(int x, int y, int z) {
    int avg;

    avg = (x + y + z) / 3;

    cout << "The Avgarge is: " << avg;
}

int main() {
    int x, y, z;

    cout << "Avarage of Three Numbers cal." << endl;
    cout << "-----------------------------" << endl;
    cout << "\n";

    cout << "Enter First num: ";
    cin >> x;

    cout << "Enter Second num: ";
    cin >> y;

    cout << "Enter Third num: ";
    cin >> z;

    cout << "\n";
    get_avg(x, y, z);


    return 0;
}