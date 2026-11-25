
// Count down from a number to 1 and print Go!

#include <iostream>
using namespace std;

int main()
{
    int number;

    // Taking user input
    cout << "Enter a number: ";
    cin >> number;

    // Count down from the number to 1
    for (int i = number; i >= 1; i--)
    {
        cout << i << endl;
    }

    // Print Go! after countdown
    cout << "Go!" << endl;

    return 0;
}
