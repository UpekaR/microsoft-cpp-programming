
// Check if a number is a power of 2

#include <iostream>
using namespace std;

int main()
{
    long long number;

    // Taking user input
    cout << "Enter a positive number: ";
    cin >> number;

    // Repeatedly divide the number by 2
    while (number > 1 && number % 2 == 0)
    {
        number /= 2;
    }

    // Check whether the number is a power of 2
    if (number == 1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}