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
        cout << "Title :" << title << ", Pages: " << pages << endl;
    }
};

void printBook(Book b) {
    b.title = "New Title";
    b.pages = 398;
    b.display();
}

int main() {
    Book book1;

    book1.setDetails("C++ Programming", 300);
    printBook(book1);
    book1.display();


    return 0;
}