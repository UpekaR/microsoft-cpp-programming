
// Find the fist pair of numbers that add upto a target

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, target;

    // Taking user input
    cout << "How many numbers? ";
    cin >> n;

    vector<int> numbers(n);

    // Read numbers
    for (int i = 0; i < n; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // Read target sum
    cout << "Enter target sum: ";
    cin >> target;

    // Find the first matching pair
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            if (numbers[i] + numbers[j] == target)
            {
                cout << numbers[i] << " " << numbers[j] << endl;

                // Stop after finding the first pair
                return 0;
            }
        }
    }

    // If no matching pair exists
    cout << "No pair found" << endl;

    return 0;
}

/*
How it works
The outer loop selects a number, and the inner loop compares it with every number that comes after it.
*/
