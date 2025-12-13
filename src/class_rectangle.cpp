#include <iostream>

using namespace std;

class Rectangle {
public:
    int length, width, area;

    int calculateArea() {
        area = length * width;
        return area;
    }
};

int main() {
    Rectangle rectangle1;

    rectangle1.length = 5;
    rectangle1.width = 5;

    int a = rectangle1.calculateArea();

    cout << "Area= " << a << endl;

    return 0;
}