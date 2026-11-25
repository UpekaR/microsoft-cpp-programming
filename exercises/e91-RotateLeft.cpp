
// Rotate a list of numbers to the left by K positions

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, K;

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

    // Read rotation amount
    cout << "Enter rotation amount K: ";
    cin >> K;

    // Handle empty list
    if (n == 0)
    {
        cout << endl;
        return 0;
    }

    // Normalize rotation amount
    K = ((K % n) + n) % n;

    // Print rotated list
    for (int i = 0; i < n; i++)
    {
        int index = (i + K) % n;

        if (i > 0)
        {
            cout << " ";
        }

        cout << numbers[index];
    }

    cout << endl;

    return 0;
}

/*
How the code works
The most important line is:
int index = (i + K) % n;
i = the current output position
K = how many positions to rotate
% = wraps around to the beginning of the list
Remember: If K is greater than the number of elements, % n handles it. 
For example, rotating 5 numbers left by 7 positions produces the same result as rotating left by 2 positions.
*/