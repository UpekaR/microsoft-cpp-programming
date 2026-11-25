
// Remove consecutive duplicate characters from a string

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input, result;

    // Taking user input
    cout << "Enter a string: ";
    getline(cin, input);

    // Remove consecutive duplicate characters
    for (int i = 0; i < input.length(); i++)
    {
        if (i == 0 || input[i] != input[i - 1])
        {
            result += input[i];
        }
    }

    // Print the result
    cout << result << endl;

    return 0;
}
