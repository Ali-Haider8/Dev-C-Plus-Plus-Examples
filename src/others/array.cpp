#include <iostream>

using namespace std;

int main() {
	int a[4];

	cout << "Enter Values for The Array: " << endl;
	for (int i = 0; i <= 3; i++)
		cin >> a[i];

	for (int i = 0; i <= 3; i++)
		cout << a[i] << ", ";

	return 0;
}
