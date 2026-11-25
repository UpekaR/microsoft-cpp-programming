
// Find the longest word in a sentence

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string sentence, word, longestWord;

    // Taking user input
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    // Split the sentence into words
    stringstream ss(sentence);

    // Find the longest word
    while (ss >> word)
    {
        if (word.length() > longestWord.length())
        {
            longestWord = word;
        }
    }

    // Print the longest word
    cout << longestWord << endl;

    return 0;
}
