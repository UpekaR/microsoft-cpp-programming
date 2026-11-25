
// Ditermine the ticket type and price based on age

#include <iostream>
using namespace std;

int main()
{
    int age;

    // Taking user input
    cout << "Enter your age: ";
    cin >> age;

    // Determine ticket type and price
    if (age < 12)
    {
        cout << "Child" << endl;
        cout << "$5" << endl;
    }
    else if (age <= 64)
    {
        cout << "Adult" << endl;
        cout << "$15" << endl;
    }
    else
    {
        cout << "Senior" << endl;
        cout << "$8" << endl;
    }

    return 0;
}
