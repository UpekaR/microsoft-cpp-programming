
// Compress a string using run-length encoding

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    string compressed = "";

    // Taking user input
    cout << "Enter a string: ";
    cin >> word;

    // Compress the string
    for (int i = 0; i < word.length(); i++)
    {
        int count = 1;

        // Count consecutive identical characters
        while (i + 1 < word.length() &&
               word[i] == word[i + 1])
        {
            count++;
            i++;
        }

        // Add character and its count
        compressed += word[i];
        compressed += to_string(count);
    }

    // Print compressed string
    cout << compressed << endl;

    return 0;
}

/*
How it works
Run-length encoding (RLE) replaces each consecutive group of identical characters 
with the character and the number of times it appears.
*/
