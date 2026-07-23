#include <iostream>

using namespace std;

int main() {
    int x;

    cout << "Enter Student Degree: ";
    cin >> x;

    if (x >= 50)
        cout << "You've Passed Exam ;)";
    else
        cout << "You've Failed :'(";

    return 0;
}