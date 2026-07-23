#include <iostream>

using namespace std;

enum Color {
    RED,
    GREEN,
    BLUE,
    YELLOW
};

int main() {
    Color myColor = GREEN;

    if (myColor == GREEN) {
        cout << "The color is Green!" << endl;
    }

    cout << "GREEN Value = " << GREEN << endl;

    return 0;
}