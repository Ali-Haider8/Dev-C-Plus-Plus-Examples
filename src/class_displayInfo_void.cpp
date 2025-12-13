#include <iostream>

using namespace std;

class Student {
public:
    string name;
    int age;

    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student student1;

    student1.name = "Ahmed";
    student1.age = 21;

    student1.displayInfo();

    return 0;
}