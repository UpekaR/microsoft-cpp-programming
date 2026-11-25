
// Reverse the digits of a number

#include <iostream>
using namespace std;

int main()
{
    long long number, reversed = 0;
    int digit;

    // Taking user input
    cout << "Enter a positive number: ";
    cin >> number;

    // Reverse the digits
    while (number > 0)
    {
        digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }

    // Print the reversed number
    cout << reversed << endl;

    return 0;
}
