
// Find all prime factors of a number

#include <iostream>
using namespace std;

int main()
{
    int number;

    // Taking user input
    cout << "Enter a number: ";
    cin >> number;

    // Find all prime factors
    for (int i = 2; i <= number / i; i++)
    {
        while (number % i == 0)
        {
            cout << i;
            number /= i;

            if (number > 1)
            {
                cout << " ";
            }
        }
    }

    // Print the remaining prime factor
    if (number > 1)
    {
        cout << number;
    }

    cout << endl;

    return 0;
}

/*
What are prime factors?
Prime factors are prime numbers that multiply together to produce the original number.
*/