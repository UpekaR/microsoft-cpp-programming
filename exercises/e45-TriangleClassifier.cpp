
// Classify a triangle based on its side lengths

#include <iostream>
using namespace std;

int main()
{
    double a, b, c;

    // Taking user input
    cout << "Enter first side: ";
    cin >> a;

    cout << "Enter second side: ";
    cin >> b;

    cout << "Enter third side: ";
    cin >> c;

    // Check whether the triangle is valid
    if (a + b <= c || a + c <= b || b + c <= a)
    {
        cout << "Not a triangle" << endl;
    }

    // Check if all three sides are equal
    else if (a == b && b == c)
    {
        cout << "Equilateral" << endl;
    }

    // Check if exactly two sides are equal
    else if (a == b || a == c || b == c)
    {
        cout << "Isosceles" << endl;
    }

    // All sides are different
    else
    {
        cout << "Scalene" << endl;
    }

    return 0;
}
