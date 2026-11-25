
// Write a function that checks if a word is a palindrome (reads the same forwards and backwards)

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Function to check if a word is a palindrome
bool isPalindrome(string word)
{
    string reversedWord = word;

    reverse(reversedWord.begin(), reversedWord.end());

    return word == reversedWord;
}

int main()
{
    string word;

    // Taking user input
    cout << "Enter a word: ";
    cin >> word;

    // Call the palindrome function
    if (isPalindrome(word))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
