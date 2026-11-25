
// Read a list of numbers and print them in reverse order

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;

    // Taking the number of elements
    cout << "Enter the count: ";
    cin >> N;

    vector<int> numbers(N);

    // Taking user input
    cout << "Enter the numbers:" << endl;

    for (int i = 0; i < N; i++)
    {
        cin >> numbers[i];
    }

    // Print numbers in reverse order
    for (int i = N - 1; i >= 0; i--)
    {
        cout << numbers[i];

        if (i > 0)
        {
            cout << " ";
        }
    }

    cout << endl;

    return 0;
}
