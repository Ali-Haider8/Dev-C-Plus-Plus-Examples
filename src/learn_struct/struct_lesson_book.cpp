#include <iostream>

using namespace std;

struct Book {
    string title;
    string author;
    int year;
    float price;
};

int main() {

    Book b1, b2;

    b1.title = "Java";
    b1.author = "Ali";
    b1.year = 2017;
    b1.price = 10.40;

    b2.title = "Python";
    b2.author = "Ali";
    b2.year = 2026;
    b2.price = 20.4;

    cout << "title: " << b2.title << endl;
    cout << "author: " << b2.author << endl;
    cout << "year: " << b2.year << endl;
    cout << "price: " << b2.price << endl;

    return 0;
}