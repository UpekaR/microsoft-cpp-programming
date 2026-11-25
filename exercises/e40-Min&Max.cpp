
// Find the smallest and largest numbers in a list

#include <iostream>
using namespace std;

int main()
{
    int n, number;
    int minValue, maxValue;

    // Taking user input
    cout << "How many numbers do you want to enter? ";
    cin >> n;

    if (n <= 0)
    {
        return 0;
    }

    // Read the first number
    cout << "Enter number 1: ";
    cin >> number;

    // Initialize min and max
    minValue = number;
    maxValue = number;

    // Read remaining numbers
    for (int i = 2; i <= n; i++)
    {
        cout << "Enter number " << i << ": ";
        cin >> number;

        // Check for smallest number
        if (number < minValue)
        {
            minValue = number;
        }

        // Check for largest number
        if (number > maxValue)
        {
            maxValue = number;
        }
    }

    // Print results
    cout << "Min: " << minValue << endl;
    cout << "Max: " << maxValue << endl;

    return 0;
}
