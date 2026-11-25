
// Count the number of words in a sentence

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string sentence;
    string word;
    int count = 0;

    // Taking user input
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    // Count words in the sentence
    stringstream ss(sentence);

    while (ss >> word)
    {
        count++;
    }

    // Print result
    cout << count << " words" << endl;

    return 0;
}
