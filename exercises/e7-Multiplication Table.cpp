
// Print the multiplication table for a given number

#include <iostream>
using namespace std;

int main()
{
    // Declare a variable to store the number
    int number;

    // Ask the user to enter a number
    cout << "Enter a number: ";
    cin >> number;

    // Print the multiplication table from 1 to 10 for the given number
    cout << "Multiplication Table for " << number << ":" << endl;
    for (int i = 1; i <= 10; i++)
    {
        // Calculate the multiplication results
        int result = number * i;

        // Display each multiplication result in the format: number x i = result
        cout << number << " x " << i << " = " << result << endl;
    }

    return 0;
}