#include <iostream>

using namespace std;

class Iraq {
public:
    string name_gov;
    int number_gov;
    string location_gov;

    void setData(string n, int h, string loc) {
        name_gov = n;
        number_gov = h;
        location_gov = loc;
    }

    void display() {
        cout << "Goverment Name: " << name_gov << ", Government Number: " << number_gov << ", Government Location: " <<
                location_gov << endl;
    }
};

int main() {
    Iraq gov1;

    gov1.setData("Baghdad", 1, "Center");

    gov1.display();

    return 0;
}