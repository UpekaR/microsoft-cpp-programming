
// Check if a number is positive, negative or zero

#include <iostream>
using namespace std;

int main()
{
    int number;

    // Taking user input
    cout << "Enter a number: ";
    cin >> number;

    // Check if the number is positive, negative, or zero
    if (number > 0)
    {
        cout << "Positive" << endl;
    }
    else if (number < 0)
    {
        cout << "Negative" << endl;
    }
    else
    {
        cout << "Zero" << endl;
    }

    return 0;
}
