#include <iostream>

using namespace std;

class Rectangle {
public:
    int length, width, area;


    void calculate_area(int i, int w) {
        i = length;
        w = width;
        area = length * width;
        cout << "Area= " << area;
    }
};

int main() {
    Rectangle rectangle1;


    rectangle1.calculate_area(5, 5);

    return 0;
}