
// Check if a given date is valid

#include <iostream>
using namespace std;

int main()
{
    int day, month, year;
    int daysInMonth;

    // Taking user input
    cout << "Enter day: ";
    cin >> day;

    cout << "Enter month: ";
    cin >> month;

    cout << "Enter year: ";
    cin >> year;

    // Check if month and year are valid
    if (month < 1 || month > 12 || year <= 0)
    {
        cout << "Invalid" << endl;
        return 0;
    }

    // Determine number of days in the month
    if (month == 2)
    {
        // Check for leap year
        if ((year % 4 == 0 && year % 100 != 0) ||
            (year % 400 == 0))
        {
            daysInMonth = 29;
        }
        else
        {
            daysInMonth = 28;
        }
    }
    else if (month == 4 || month == 6 ||
             month == 9 || month == 11)
    {
        daysInMonth = 30;
    }
    else
    {
        daysInMonth = 31;
    }

    // Check if day is valid
    if (day >= 1 && day <= daysInMonth)
    {
        cout << "Valid" << endl;
    }
    else
    {
        cout << "Invalid" << endl;
    }

    return 0;
}
