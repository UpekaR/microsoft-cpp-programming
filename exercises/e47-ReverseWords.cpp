
// Reverse the order of words in a sentence

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
    string sentence, word;
    vector<string> words;

    // Taking user input
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    // Split the sentence into individual words
    stringstream ss(sentence);

    while (ss >> word)
    {
        words.push_back(word);
    }

    // Print words in reverse order
    for (int i = static_cast<int>(words.size()) - 1; i >= 0; i--)
    {
        cout << words[i];

        // Add spaces between words
        if (i > 0)
        {
            cout << " ";
        }
    }

    cout << endl;

    return 0;
}
