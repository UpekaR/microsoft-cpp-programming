
// Print a diamond pattern of stars

#include <iostream>
using namespace std;

int main()
{
    int N;

    // Taking user input
    cout << "Enter an odd number: ";
    cin >> N;

    int middle = N / 2;

    // Print the upper half (including middle row)
    for (int i = 0; i <= middle; i++)
    {

        // Print leading spaces
        for (int j = 0; j < middle - i; j++)
        {
            cout << " ";
        }

        // Print stars
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    // Print the lower half
    for (int i = middle - 1; i >= 0; i--)
    {

        // Print leading spaces
        for (int j = 0; j < middle - i; j++)
        {
            cout << " ";
        }

        // Print stars
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
