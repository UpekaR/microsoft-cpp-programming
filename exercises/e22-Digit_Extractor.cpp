
// Extract the individual digits of a 3-digit number

#include <iostream>
using namespace std;

int main()
{
    int number;

    // Taking user input
    cout << "Enter a 3-digit number: ";
    cin >> number;

    // Extract individual digits
    int hundreds = number / 100;
    int tens = (number / 10) % 10;
    int ones = number % 10;

    // Print results
    cout << "Hundreds: " << hundreds << endl;
    cout << "Tens: " << tens << endl;
    cout << "Ones: " << ones << endl;

    return 0;
}
