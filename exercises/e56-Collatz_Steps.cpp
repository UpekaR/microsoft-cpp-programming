
// Count the number of steps in the Collatz sequence for a given number

#include <iostream>
using namespace std;

int main()
{
    long long number;
    int steps = 0;

    // Taking user input
    cout << "Enter a positive number: ";
    cin >> number;

    // Repeat until the number becomes 1
    while (number > 1)
    {

        // Check if the number is even
        if (number % 2 == 0)
        {
            number = number / 2;
        }
        else
        {
            number = number * 3 + 1;
        }

        // Increase the step counter
        steps++;
    }

    // Print the result
    cout << "Steps: " << steps << endl;

    return 0;
}

/*
what is collatz steps
Collatz steps are the number of mathematical operations required to transform a positive integer into 1 by following the rules of the Collatz sequence, also known as the 3n + 1 problem.

The two rules
If the number is even, divide it by 2.

If the number is odd, multiply it by 3 and add 1.

Repeat until the number reaches 1.
*/
