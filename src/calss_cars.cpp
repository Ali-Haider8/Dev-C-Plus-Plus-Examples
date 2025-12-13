#include <iostream>

using namespace std;

class Cars {
public:
    string car_name;

    void display() {
        cout << car_name;
    }
};

int main() {
    Cars car1;

    car1.car_name = "Audi";
    car1.display();

    return 0;
}