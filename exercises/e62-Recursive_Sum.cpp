
// Write a recursive function to sum numbers from 1 to N

#include <iostream>
using namespace std;

// Recursive function to calculate the sum
long long recursiveSum(int N)
{
    // Base case
    if (N == 1)
    {
        return 1;
    }

    // Recursive case
    return N + recursiveSum(N - 1);
}

int main()
{
    int N;

    // Taking user input
    cout << "Enter a positive number: ";
    cin >> N;

    // Call the recursive function
    long long result = recursiveSum(N);

    // Print the result
    cout << "Sum: " << result << endl;

    return 0;
}

/*
How recursion works
Recursion occurs when a function calls itself to solve a smaller version of the same problem.
*/