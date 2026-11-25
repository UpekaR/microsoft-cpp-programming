
// Implement insetion sort and print each step

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

    // Insertion Sort
    for (int i = 1; i < n; i++)
    {
        int key = numbers[i];
        int j = i - 1;

        // Shift larger elements to the right
        while (j >= 0 && numbers[j] > key)
        {
            numbers[j + 1] = numbers[j];
            j--;
        }

        // Insert the key into its correct position
        numbers[j + 1] = key;

        // Print array after each insertion
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
