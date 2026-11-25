
// Check if a number falls within a given range

#include <iostream>
using namespace std;

int main()
{
    int number, low, high;

    // Taking user input
    cout << "Enter a number: ";
    cin >> number;

    cout << "Enter the low value: ";
    cin >> low;

    cout << "Enter the high value: ";
    cin >> high;

    // Check if the number is within the range
    if (number >= low && number <= high)
    {
        cout << "In range" << endl;
    }
    else
    {
        cout << "Out of range" << endl;
    }

    return 0;
}
