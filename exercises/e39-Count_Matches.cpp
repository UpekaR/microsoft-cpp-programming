
// Count how many numbers in a list match a target value

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, number, target;
    int count = 0;

    // Taking user input
    cout << "How many numbers do you want to enter? ";
    cin >> n;

    vector<int> numbers(n);

    // Read the numbers
    for (int i = 0; i < n; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // Read the target number
    cout << "Enter target number: ";
    cin >> target;

    // Count numbers matching the target
    for (int i = 0; i < n; i++)
    {
        if (numbers[i] == target)
        {
            count++;
        }
    }

    // Print result
    cout << "Count: " << count << endl;

    return 0;
}
