
// Determine if a person is old enough to vote

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Declare variables
    string name;
    int age;

    // Get user input
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your age: ";
    cin >> age;

    // Determine if the person is old enough to vote
    if (age >= 18)
    {
        cout << name << " Can vote." << endl;
    }
    else
    {
        cout << name << " Cannot vote." << endl;
    }

    return 0;
}
