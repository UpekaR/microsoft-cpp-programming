
// Implement bubble sort and count the number of swaps

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

    int swaps = 0;

    // Bubble Sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {

            // Compare adjacent numbers
            if (numbers[j] > numbers[j + 1])
            {

                // Swap the numbers
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;

                // Count the swap
                swaps++;
            }
        }
    }

    // Print sorted numbers
    for (int i = 0; i < n; i++)
    {
        if (i > 0)
        {
            cout << " ";
        }
        cout << numbers[i];
    }

    cout << endl;

    // Print total swaps
    cout << "Swaps: " << swaps << endl;

    return 0;
}

/*
How Bubble Sort works
Bubble sort compares two neighboring numbers and swaps them when the left number is greater than the right number.
Key C++ concepts
- Outer for loop: Controls how many sorting passes are performed.
- Inner for loop: Compares adjacent elements.
- numbers[j] > numbers[j + 1]: Checks whether two numbers are in the wrong order.
- temp: Temporarily stores a value while swapping.
- swaps++: Increases the swap counter by 1 whenever a swap occurs.
- n - i - 1: Avoids checking elements already in their final sorted positions.
*/