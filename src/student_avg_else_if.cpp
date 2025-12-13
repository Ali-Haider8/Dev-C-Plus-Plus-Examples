#include <iostream>

using namespace std;

int main() {
    int avg;
    string a, b, c, d, e, f;

    a = "Excellent";
    b = "Very Good";
    c = "Good";
    d = "Ok";
    e = "No Problem";
    f = "Failed :(";

    cout << "Enter Student Avarage: ";
    cin >> avg;

    if (avg >= 90) cout << a;
    else if (avg >= 80) cout << b;
    else if (avg >= 70) cout << c;
    else if (avg >= 60) cout << d;
    else if (avg >= 50) cout << e;
    else cout << f;

    return 0;
}