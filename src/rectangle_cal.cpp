#include <iostream>

using namespace std;

int main() {
    int length, width;
    int area, primeter;

    cout << "Rectangle dimensions calculator" << endl;

    cout << "Area cal." << "\n" << "Enter dimensions: " << endl;
    cout << "\n";

    //	cout<<"Area = 2(length + width)"

    cout << "Length= ";
    cin >> length;

    cout << "Width= ";
    cin >> width;


    int length_sum_width = length + width;
    int length_mul_width = length * width;


    area = length * width;
    primeter = 2 * length_sum_width;

    cout << "\n";
    cout << "Area= " << area << endl;

    cout << "Perimeter= " << primeter;
    return 0;
}