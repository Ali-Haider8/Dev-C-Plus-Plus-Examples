#include <iostream>

using namespace std;

class Book {
public:
    string title;
    int pages;

    void setDetails(string t, int p) {
        title = t;
        pages = p;
    }

    void display() {
        cout << "Title: " << title << ", Pages: " << pages << endl;
    }
};

void modifyBook(Book &b) {
    b.title = "Advanced C++";
    b.pages = 214;

    b.display();
}

int main() {
    Book book1;

    book1.setDetails("C++ Programming", 132);

    modifyBook(book1);

    book1.display();

    return 0;

    return 0;
}