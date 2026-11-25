
// Print the first N numbers of the Fibonacci sequence

#include <iostream>
using namespace std;

int main()
{
    int N;
    long long a = 0, b = 1, next;

    // Taking user input
    cout << "Enter a number: ";
    cin >> N;

    // Generate the Fibonacci sequence
    for (int i = 0; i < N; i++)
    {
        cout << a;

        // Add spaces between numbers
        if (i < N - 1)
        {
            cout << " ";
        }

        // Calculate the next number
        if (i < N - 1)
        {
            next = a + b;
            a = b;
            b = next;
        }
    }

    cout << endl;

    return 0;
}

/*
What is the Fibonacci sequence?
The Fibonacci sequence is a series of numbers in which each new number is the sum of the previous two numbers.
*/