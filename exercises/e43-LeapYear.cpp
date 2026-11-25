
// Determine if a given year is a leap year

#include <iostream>
using namespace std;

int main()
{
    int year;

    // Taking user input
    cout << "Enter a year: ";
    cin >> year;

    // Check whether the year is a leap year
    if ((year % 4 == 0 && year % 100 != 0) ||
        (year % 400 == 0))
    {
        cout << "Leap year" << endl;
    }
    else
    {
        cout << "Not a leap year" << endl;
    }

    return 0;
}
