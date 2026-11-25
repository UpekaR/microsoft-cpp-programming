
// Convert a day number to a day name

#include <iostream>
using namespace std;

int main()
{
    int day;

    // Taking user input
    cout << "Enter a day number (1-7): ";
    cin >> day;

    // Determine the day of the week
    switch (day)
    {
    case 1:
        cout << "Monday" << endl;
        break;

    case 2:
        cout << "Tuesday" << endl;
        break;

    case 3:
        cout << "Wednesday" << endl;
        break;

    case 4:
        cout << "Thursday" << endl;
        break;

    case 5:
        cout << "Friday" << endl;
        break;

    case 6:
        cout << "Saturday" << endl;
        break;

    case 7:
        cout << "Sunday" << endl;
        break;

    default:
        cout << "Invalid" << endl;
    }

    return 0;
}
