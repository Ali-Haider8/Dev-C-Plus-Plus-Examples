#include <iostream>

using namespace std;

class Complex {
private:
    int real, imag;

public:
    void setValues(int r, int i) {
        real = r;
        imag = i;
    }

    void display() {
        cout << "Complex number: " << real << "+" << imag << "i" << endl;
    }

    Complex add(Complex c) {
        Complex result;

        result.real = real + c.real;
        result.imag = imag + c.imag;

        return result;
    }
};

int main() {
    Complex c1, c2, sum;

    c1.setValues(3, 4);
    c2.setValues(5, 6);

    sum = c1.add(c2);

    sum.display();

    return 0;
}