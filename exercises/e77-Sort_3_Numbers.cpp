
// Read 3 numbers and print them sorted

#include <iostream>
#include <utility>
using namespace std;

int main()
{
    int a, b, c;

    // Taking user input
    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "Enter third number: ";
    cin >> c;

    // Sort the numbers in ascending order
    if (a > b)
    {
        swap(a, b);
    }

    if (a > c)
    {
        swap(a, c);
    }

    if (b > c)
    {
        swap(b, c);
    }

    // Print the sorted numbers
    cout << a << " " << b << " " << c << endl;

    return 0;
}
