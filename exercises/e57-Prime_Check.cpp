
// Check if a number is a prime number

#include <iostream>
using namespace std;

int main()
{
    int number;
    bool isPrime = true;

    // Taking user input
    cout << "Enter a number: ";
    cin >> number;

    // Check whether the number is prime
    for (int i = 2; i <= number / i; i++)
    {
        if (number % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    // Print the result
    if (isPrime)
    {
        cout << "Prime" << endl;
    }
    else
    {
        cout << "Not prime" << endl;
    }

    return 0;
}
