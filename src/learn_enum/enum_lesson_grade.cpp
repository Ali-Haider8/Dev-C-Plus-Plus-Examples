#include <iostream>

using namespace std;

enum Grade {
    A = 90,
    B = 80,
    C = 70,
    D = 60,
    F = 0
};

int main() {
    Grade myGrade = A;

    if (myGrade == A) {
        cout << "Excellent" << endl;
    }
    else if (myGrade == B) {
        cout << "Very Good" << endl;

    }
    else if (myGrade == C) {
        cout << "Good" << endl;

    }
    else if (myGrade == D) {
        cout << "Pass" << endl;
    }
    else if (myGrade == F) {
        cout << "Fail" << endl;
    }
    else {
        cout << "Wrong" << endl;
    }
    return 0;
}