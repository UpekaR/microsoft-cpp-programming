
// Calculate the sum of all digits in a number

#include <iostream>
using namespace std;

int main()
{
    long long number;
    int digit, sum = 0;

    // Taking user input
    cout << "Enter a positive number: ";
    cin >> number;

    // Calculate the sum of digits
    while (number > 0)
    {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }

    // Print the result
    cout << "Digit sum: " << sum << endl;

    return 0;
}
