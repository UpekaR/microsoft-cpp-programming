
// Check if two words are anagrams of each other

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string word1, word2;

    // Taking user input
    cout << "Enter first word: ";
    cin >> word1;

    cout << "Enter second word: ";
    cin >> word2;

    // Sort letters in both words
    sort(word1.begin(), word1.end());
    sort(word2.begin(), word2.end());

    // Check if both words contain the same letters
    if (word1 == word2)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
