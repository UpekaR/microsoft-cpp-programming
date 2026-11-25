
// Check if a password is long enough

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string password;

    // Taking user input
    cout << "Enter your password: ";
    cin >> password;

    // Check password length
    if (password.length() >= 8)
    {
        cout << "Valid" << endl;
    }
    else
    {
        cout << "Invalid" << endl;
    }

    return 0;
}
