#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

    cout << a << endl;
    cout << b << endl;
};

int main() {

    int x = 10;
    int *ptr1 = &x;

    int y = 20;
    int *ptr2 = &y;

    swap(ptr1, ptr2);

    return 0;
}