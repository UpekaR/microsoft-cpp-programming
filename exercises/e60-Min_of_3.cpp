
// Write a function that returns the smallest of three numbers

#include <iostream>
using namespace std;

// Function to find the smallest number
int minOfThree(int a, int b, int c)
{
    if (a <= b && a <= c)
    {
        return a;
    }
    else if (b <= a && b <= c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int main()
{
    int num1, num2, num3;

    // Taking user input
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter third number: ";
    cin >> num3;

    // Call the function
    int result = minOfThree(num1, num2, num3);

    // Print the result
    cout << "Min: " << result << endl;

    return 0;
}
