#include <iostream>

using namespace std;

class Circle {
private:
    double radius;

public:
    void setRadius(double r);

    double calculateArea();
};

void Circle::setRadius(double r) {
    radius = r;
}

double Circle::calculateArea() {
    return 3.14 * radius * radius;
}

int main() {
    Circle circle;

    circle.setRadius(7);

    cout << "Area of the circle: " << circle.calculateArea() << endl;

    return 0;
}