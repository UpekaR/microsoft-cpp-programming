
// Read personal details from input and display them.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name, age, city;

    // Taking user input
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    getline(cin, age);

    cout << "Enter your city: ";
    getline(cin, city);

    // Print the info
    cout << "\n----- Personal Information -----" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "City: " << city << endl;

    return 0;
}
