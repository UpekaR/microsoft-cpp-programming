
// Implement selection sort and print each step

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;

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

    // Selection Sort
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        // Find the smallest remaining number
        for (int j = i + 1; j < n; j++)
        {
            if (numbers[j] < numbers[minIndex])
            {
                minIndex = j;
            }
        }

        // Swap the smallest number into position
        int temp = numbers[i];
        numbers[i] = numbers[minIndex];
        numbers[minIndex] = temp;

        // Print array after each pass
        for (int k = 0; k < n; k++)
        {
            if (k > 0)
            {
                cout << " ";
            }
            cout << numbers[k];
        }

        cout << endl;
    }

    return 0;
}

/*
How Selection Sort works
Selection sort finds the smallest number in the unsorted portion and places it in the next available position.

Key C++ concepts
- minIndex = i — Assumes the current element is the smallest.
- j = i + 1 — Starts searching the remaining unsorted elements.
- numbers[j] < numbers[minIndex] — Finds a smaller number.
- temp — Helps swap two elements.
- The outer loop runs n - 1 times, printing one line after each pass.
*/
