
// Count how many unique numbers appear in a list

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;

    // Taking user input
    cout << "How many numbers do you want to enter? ";
    cin >> n;

    vector<int> numbers(n);

    // Read numbers
    for (int i = 0; i < n; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // Count unique numbers
    int uniqueCount = 0;

    for (int i = 0; i < n; i++)
    {
        int count = 0;

        for (int j = 0; j < n; j++)
        {
            if (numbers[i] == numbers[j])
            {
                count++;
            }
        }

        if (count == 1)
        {
            uniqueCount++;
        }
    }

    // Print result
    cout << "Unique: " << uniqueCount << endl;

    return 0;
}
