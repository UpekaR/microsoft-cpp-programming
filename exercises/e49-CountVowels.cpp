
// Count the number of vowels in a string

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string input;
    int count = 0;

    // Taking user input
    cout << "Enter a string: ";
    getline(cin, input);

    // Check each character
    for (char letter : input)
    {

        // Convert character to lowercase
        letter = tolower(letter);

        // Check whether the character is a vowel
        if (letter == 'a' || letter == 'e' ||
            letter == 'i' || letter == 'o' ||
            letter == 'u')
        {
            count++;
        }
    }

    // Print the result
    cout << "Vowels: " << count << endl;

    return 0;
}
