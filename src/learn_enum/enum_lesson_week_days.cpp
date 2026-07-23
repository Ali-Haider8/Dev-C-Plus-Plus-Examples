#include <iostream>

using namespace std;

enum Day
{
    Saturday,
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday
};

int main()
{
    Day myDay = Wednesday;

    if (myDay == Wednesday)
    {
        cout << "Today is Wednesday" << endl;
    }

    cout << "Wednesday value = " << Wednesday << endl;

    return 0;
}