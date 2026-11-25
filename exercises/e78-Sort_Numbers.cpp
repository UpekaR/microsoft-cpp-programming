
// Read a list of numbers and print them sorted

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;

    // Taking the number of elements
    cout << "Enter the count: ";
    cin >> N;

    // Create a vector to store numbers
    vector<int> numbers(N);

    // Taking user input
    cout << "Enter the numbers:" << endl;

    for (int i = 0; i < N; i++)
    {
        cin >> numbers[i];
    }

    // Sort numbers in ascending order
    sort(numbers.begin(), numbers.end());

    // Print sorted numbers
    for (int i = 0; i < N; i++)
    {
        cout << numbers[i];

        if (i < N - 1)
        {
            cout << " ";
        }
    }

    cout << endl;

    return 0;
}
