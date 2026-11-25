
// Remove duplicate numbers from a list while keeping order

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, number;
    vector<int> uniqueNumbers;

    // Taking user input
    cout << "How many numbers do you want to enter? ";
    cin >> n;

    // Read numbers
    for (int i = 0; i < n; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> number;

        bool isDuplicate = false;

        // Check if the number already exists
        for (int j = 0; j < uniqueNumbers.size(); j++)
        {
            if (uniqueNumbers[j] == number)
            {
                isDuplicate = true;
                break;
            }
        }

        // Add only if not already present
        if (!isDuplicate)
        {
            uniqueNumbers.push_back(number);
        }
    }

    // Print numbers without duplicates
    for (int i = 0; i < uniqueNumbers.size(); i++)
    {
        if (i > 0)
        {
            cout << " ";
        }
        cout << uniqueNumbers[i];
    }

    cout << endl;

    return 0;
}