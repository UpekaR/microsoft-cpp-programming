
// Capialize the first letter of each word in a string

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string sentence;

    // Taking user input
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    // Capitalize the first letter of each word
    for (int i = 0; i < sentence.length(); i++)
    {
        if (i == 0 || sentence[i - 1] == ' ')
        {
            sentence[i] = toupper(sentence[i]);
        }
    }

    // Print the modified sentence
    cout << sentence << endl;

    return 0;
}
