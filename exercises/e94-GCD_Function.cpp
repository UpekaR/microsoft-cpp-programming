
// Write a recusive function to find the GCD of two numbers

#include <iostream>
using namespace std;

// Recursive GCD function
int gcd(int a, int b)
{

    // Base case
    if (b == 0)
    {
        return a;
    }

    // Recursive case
    return gcd(b, a % b);
}

int main()
{
    int a, b;

    // Taking user input
    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    // Call the GCD function
    int result = gcd(a, b);

    // Print the result
    cout << "GCD: " << result << endl;

    return 0;
}

/*
/*
The Euclidean algorithm finds the greatest common divisor (GCD) of two positive integers using recursion.

The function repeatedly calls itself by replacing:
- a with b
- b with the remainder of a % b

When b becomes 0, the recursion stops and returns a,
which is the greatest common divisor.

Example:
gcd(48, 18)
gcd(18, 12)
gcd(12, 6)
gcd(6, 0)

Therefore, GCD = 6

int gcd(int a, int b)
{

    // Base case: Stop recursion when b becomes zero
    if (b == 0)
    {
        return a;
    }

    // Recursive case: Call the function with b and the remainder
    return gcd(b, a % b);
}
*/
