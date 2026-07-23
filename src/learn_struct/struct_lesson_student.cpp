#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int age;
    float gpa;
};

int main () {
    Student s1;

    s1.name = "Ali";
    s1.age = 20;
    s1.gpa = 3.75;

    cout << "name: " << s1.name << endl;
    cout << "age: " << s1.age << endl;
    cout << "gpa: " << s1.gpa << endl;

    return 0;
}