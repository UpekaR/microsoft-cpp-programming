
// Read a message from the user and repeat it a specified number of times

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string message;
    int n;

    // Taking user input
    cout << "Enter your message: ";
    getline(cin, message);

    cout << "How many times do you want to repeat it? ";
    cin >> n;

    // Print the message n times
    for (int i = 0; i < n; i++)
    {
        cout << message << endl;
    }

    return 0;
}
