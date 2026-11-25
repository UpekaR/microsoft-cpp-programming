
// Write a function that counts the number of digits in a number

#include <iostream>
using namespace std;

// Function to count digits
int countDigits(long long number)
{
    int count = 0;

    while (number > 0)
    {
        number /= 10;
        count++;
    }

    return count;
}

int main()
{
    long long number;

    // Taking user input
    cout << "Enter a positive number: ";
    cin >> number;

    // Call the function
    int result = countDigits(number);

    // Print the result
    cout << "Digits: " << result << endl;

    return 0;
}
