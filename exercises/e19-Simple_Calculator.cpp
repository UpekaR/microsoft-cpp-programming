
// Perform basic arithmetic on two numbers

#include <iostream>
using namespace std;

int main()
{
    int a, b;

    // Taking user input
    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    // Addition
    cout << a << " + " << b << " = " << a + b << endl;

    // Subtraction
    cout << a << " - " << b << " = " << a - b << endl;

    // Multiplication
    cout << a << " * " << b << " = " << a * b << endl;

    // Division (integer division)
    if (b != 0)
    {
        cout << a << " / " << b << " = " << a / b << endl;
    }
    else
    {
        cout << "Error: Division by zero!" << endl;
    }

    return 0;
}
