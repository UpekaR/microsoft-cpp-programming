
// Calculate the least common multiple of two numbers

#include <iostream>
using namespace std;

// Function to calculate GCD
long long gcd(long long a, long long b)
{
    if (b == 0)
    {
        return a;
    }

    return gcd(b, a % b);
}

int main()
{
    long long a, b, lcm;

    // Taking user input
    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    // Calculate LCM using GCD
    lcm = (a / gcd(a, b)) * b;

    // Print the result
    cout << "LCM: " << lcm << endl;

    return 0;
}
