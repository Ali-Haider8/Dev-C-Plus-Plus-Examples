#include <iostream>

using namespace std;

int main() {
    float math_degree, bio_degree, chem_degree;

    cout << "Student Avarage Degree Calculator" << "\n" << "---------------" << "\n";

    cout << "\n" << "Enter Math Degree: ";

    cin >> math_degree;
    cout << "Math Degree: " << "(" << math_degree << "/100)" << endl;

    cout << "\n" << "Enter Biology Degree: ";
    cin >> bio_degree;
    cout << "Biology Degree: " << "(" << bio_degree << "/100)" << endl;


    cout << "\n" << "Enter Chemistry Degree: ";
    cin >> chem_degree;
    cout << "Chemistry Degree: " << "(" << chem_degree << "/100)" << endl;

    cout << "\n" << "The Avg Degree: " << (math_degree + bio_degree + chem_degree) / 3;


    return 0;
}