
// Encrypt a message by shifting each letter in the alphabet

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string message;
    int shift;

    // Taking user input
    cout << "Enter a message: ";
    cin >> message;

    cout << "Enter shift number: ";
    cin >> shift;

    // Encrypt the message
    shift = ((shift % 26) + 26) % 26;

    for (int i = 0; i < message.length(); i++)
    {
        message[i] = 'a' + (message[i] - 'a' + shift) % 26;
    }

    // Print encrypted message
    cout << message << endl;

    return 0;
}
