
// Convert a string to uppercase and print its length

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string word;

    // Taking user input
    cout << "Enter a word: ";
    cin >> word;

    // Convert the word to uppercase
    for (int i = 0; i < word.length(); i++)
    {
        word[i] = toupper(word[i]);
    }

    // Print uppercase word
    cout << word << endl;

    // Print word length
    cout << "Length: " << word.length() << endl;

    return 0;
}
