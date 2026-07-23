#include <iostream>

using namespace std;

struct Point {
    int x;
    int y;
};

int main() {
    Point p1, p2;
    p1.x = 10;
    p1.y = 20;

    p2.x = 30;
    p2.y = 40;

    cout << "sum of x: " << (p1.x + p2.x) << endl;
    cout << "sum of y: " << (p1.y + p2.y) << endl;

    return 0;
}