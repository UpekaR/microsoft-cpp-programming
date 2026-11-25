
// Implement the classic FizzBuzz challenge

#include <iostream>
using namespace std;

int main()
{
    int N;

    // Taking user input
    cout << "Enter a number: ";
    cin >> N;

    // Print numbers from 1 to N
    for (int i = 1; i <= N; i++)
    {

        // Divisible by both 3 and 5
        if (i % 3 == 0 && i % 5 == 0)
        {
            cout << "FizzBuzz" << endl;
        }
        // Divisible by 3
        else if (i % 3 == 0)
        {
            cout << "Fizz" << endl;
        }
        // Divisible by 5
        else if (i % 5 == 0)
        {
            cout << "Buzz" << endl;
        }
        // Not divisible by 3 or 5
        else
        {
            cout << i << endl;
        }
    }

    return 0;
}
