
// Calculate the sum of sequare numbers from 1 to N

#include <iostream>
using namespace std;

int main()
{
    int N;
    long long sum = 0;

    // Taking user input
    cout << "Enter a number: ";
    cin >> N;

    // Calculate the sum of squares
    for (long long i = 1; i <= N; i++)
    {
        sum += i * i;
    }

    // Print the result
    cout << "Sum: " << sum << endl;

    return 0;
}
