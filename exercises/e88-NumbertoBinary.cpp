
// Convert a decimal number to binary

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int number;
    string binary = "";

    // Taking user input
    cout << "Enter a positive number: ";
    cin >> number;

    // Convert decimal to binary
    while (number > 0)
    {
        int remainder = number % 2;

        // Add the remainder to the beginning
        binary = to_string(remainder) + binary;

        // Divide the number by 2
        number = number / 2;
    }

    // Print binary result
    cout << binary << endl;

    return 0;
}
