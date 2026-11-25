
// Calculate the absolute difference between two numbers

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b;

    // Taking user input
    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    // Calculate absolute difference
    double difference = abs(a - b);

    // Print result
    cout << "Difference: " << difference << endl;

    return 0;
}
