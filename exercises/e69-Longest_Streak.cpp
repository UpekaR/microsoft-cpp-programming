
// Find the longest consecutive streak of the same number

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    int currentStreak = 1;
    int longestStreak = 1;

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

    // Handle an empty list
    if (N == 0)
    {
        cout << "Longest streak: 0" << endl;
        return 0;
    }

    // Find the longest consecutive streak
    for (int i = 1; i < N; i++)
    {
        if (numbers[i] == numbers[i - 1])
        {
            currentStreak++;
        }
        else
        {
            currentStreak = 1;
        }

        // Update the longest streak
        if (currentStreak > longestStreak)
        {
            longestStreak = currentStreak;
        }
    }

    // Print the result
    cout << "Longest streak: " << longestStreak << endl;

    return 0;
}

/*
How it works
The program compares each number with the previous number. 
If they are identical, it increases currentStreak. Otherwise, it resets currentStreak to 1.
*/