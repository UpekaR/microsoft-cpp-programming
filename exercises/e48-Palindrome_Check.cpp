
// Check if a word reads the same forwards and backwards (palindrome)

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string word, reversedWord;

    // Taking user input
    cout << "Enter a word: ";
    cin >> word;

    // Copy the original word
    reversedWord = word;

    // Reverse the copied word
    reverse(reversedWord.begin(), reversedWord.end());

    // Check whether the word is a palindrome
    if (word == reversedWord)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
