#include <iostream>

using namespace std;

class Rectangle {
public:
    int width, length;

    void setDimensions(int i, int w) {
        length = i;
        width = w;
    }

    int calculateArea() {
        return length * width;
    }
};

int main() {
    Rectangle rect;

    rect.setDimensions(5, 10);

    cout << "Area: " << rect.calculateArea() << endl;

    return 0;
}