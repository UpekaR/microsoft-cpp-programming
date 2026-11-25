
// Determine if a person gets access based on role, age and membership

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string role, membership;
    int age;

    // Taking user input
    cout << "Enter role: ";
    cin >> role;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter membership status (yes/no): ";
    cin >> membership;

    // Check access conditions
    if (role == "admin" || (age >= 18 && membership == "yes"))
    {
        cout << "Access granted" << endl;
    }
    else
    {
        cout << "Access denied" << endl;
    }

    return 0;
}
