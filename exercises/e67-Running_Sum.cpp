
// Print the running (cumulative) sum of a list of numbers

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    long long sum = 0;

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

    // Calculate and print the running sum
    for (int i = 0; i < N; i++)
    {
        sum += numbers[i];

        cout << sum;

        if (i < N - 1)
        {
            cout << " ";
        }
    }

    cout << endl;

    return 0;
}

/*
How it works
A running sum, also called a cumulative sum, adds each new number to the previous total.
*/