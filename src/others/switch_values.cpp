#include <iostream>

using namespace std;

int main() {
    int x, y, z;

    cin >> x >> y >> z;

    z = x;
    x = y;
    y = z;


    //	cout<<x<<endl<<y<<endl<<z;
    cout << "x: " << x << endl;
    cout << "y: " << y;

    return 0;
}