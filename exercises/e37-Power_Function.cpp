
// Write a function that calculates the power of a number

#include <iostream>
using namespace std;

// Function to calculate power
long long calculatePower(int base, int exponent)
{
    long long result = 1;

    // Multiply the base exponent times
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }

    return result;
}

int main()
{
    int base, exponent;

    // Taking user input
    cout << "Enter base: ";
    cin >> base;

    cout << "Enter exponent: ";
    cin >> exponent;

    // Call the function
    long long result = calculatePower(base, exponent);

    // Print result
    cout << "Result: " << result << endl;

    return 0;
}
