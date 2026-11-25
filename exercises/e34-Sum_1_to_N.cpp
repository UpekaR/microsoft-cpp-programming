
// Calculate the sum of all numbers from 1 to N

#include <iostream>
using namespace std;

int main()
{
    int N;
    int sum = 0;

    // Taking user input
    cout << "Enter a number: ";
    cin >> N;

    // Calculate the sum from 1 to N
    for (int i = 1; i <= N; i++)
    {
        sum += i;
    }

    // Print result
    cout << "Sum: " << sum << endl;

    return 0;
}
