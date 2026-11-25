
// Count how many times each word appears in a sentence

#include <iostream>
#include <string>
#include <sstream>
#include <map>
using namespace std;

int main()
{
    string sentence, word;
    map<string, int> frequency;

    // Taking user input
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    // Split the sentence into words
    stringstream ss(sentence);

    // Count each word
    while (ss >> word)
    {
        frequency[word]++;
    }

    // Print words and their frequencies
    for (const auto &entry : frequency)
    {
        cout << entry.first << ":" << entry.second << endl;
    }

    return 0;
}
