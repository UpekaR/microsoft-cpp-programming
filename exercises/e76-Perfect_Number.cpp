
// Check if a number is a perfect number

#include <iostream>
using namespace std;

int main()
{
    int number;
    long long sum = 0;

    // Taking user input
    cout << "Enter a positive number: ";
    cin >> number;

    // Find and add all proper divisors
    for (int i = 1; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            sum += i;
        }
    }

    // Check whether it is a perfect number
    if (sum == number)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}

/*
What is a perfect number?
A perfect number is a positive integer that equals the sum of its proper divisors, excluding itself.
*/

/*
This program finds and adds all proper divisors of
a number using a for loop. If their sum equals the
original number, it is a perfect number.
*/