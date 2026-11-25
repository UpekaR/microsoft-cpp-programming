
// Find the smallest of three numbbers

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    int smallest;

    // Taking user input
    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "Enter third number: ";
    cin >> c;

    // Find the smallest number
    if (a <= b && a <= c)
    {
        smallest = a;
    }
    else if (b <= a && b <= c)
    {
        smallest = b;
    }
    else
    {
        smallest = c;
    }

    // Print result
    cout << "Smallest: " << smallest << endl;

    return 0;
}
