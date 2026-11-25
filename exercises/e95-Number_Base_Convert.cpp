
// Convert a number from one base to another

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string number;
    int sourceBase, targetBase;
    long long decimal = 0;
    string result = "";

    // Taking user input
    cout << "Enter number: ";
    cin >> number;

    cout << "Enter source base: ";
    cin >> sourceBase;

    cout << "Enter target base: ";
    cin >> targetBase;

    /*
    Step 1: Convert the source number into decimal.
    Multiply the current decimal value by the source base
    and add the next digit.
    */
    for (int i = 0; i < number.length(); i++)
    {
        int digit = number[i] - '0';
        decimal = decimal * sourceBase + digit;
    }

    /*
    Step 2: Convert the decimal number into the target base.
    Repeatedly divide the decimal number by the target base
    and add each remainder to the beginning of the result.
    */

    if (decimal == 0)
    {
        result = "0";
    }

    while (decimal > 0)
    {
        int remainder = decimal % targetBase;

        result = char('0' + remainder) + result;

        decimal = decimal / targetBase;
    }

    // Print the converted number
    cout << result << endl;

    return 0;
}

/*
This program converts a number from one base to another.
First, it converts the source number to decimal by multiplying
the current value by the source base and adding each digit.
Then, it converts the decimal value to the target base by
repeatedly dividing and collecting the remainders in reverse order.
No built-in base conversion functions are used.
*/
