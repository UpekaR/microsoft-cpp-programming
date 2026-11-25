
// Find the greatest common divisor (GCD) of two numbers

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    long long a, b, remainder;

    // Taking user input
    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    // Convert negative numbers to positive
    a = abs(a);
    b = abs(b);

    // Calculate GCD using the Euclidean algorithm
    while (b != 0)
    {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    // Print the result
    cout << "GCD: " << a << endl;

    return 0;
}

/*
What is GCD?
The Greatest Common Divisor is the largest positive integer that divides both numbers without leaving a remainder.
*/