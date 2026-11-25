
// Create a username and initials from a first and last name.

#include <iostream>  // For input (cin) and output (cout)
#include <string>    // For using strings
#include <algorithm> // For transform()
#include <cctype>    // For tolower() and toupper()

using namespace std;

int main()
{
    // Step 1: Declare 2 string variables
    // These will store the user's first and last names
    string firstName, lastName;

    // Step 2: Read the first name & last name
    // Getline() reads the entire line of input
    cout << "Type your first name: ";
    getline(cin, firstName);

    cout << "Type your last name: ";
    getline(cin, lastName);

    // Step 3: Create a username
    // Join the first name & last names without adding a space
    string username = firstName + lastName;

    // Step 4: Convert the username to lowercase
    // begin() points to the first character
    // end() points just after the last character
    // The third argument tells transform() where to store results
    // tolower() converts uppercase letters to lowercase
    transform(username.begin(), username.end(), username.begin(), ::tolower);

    // Step 5: Create an empty string for the initials
    string initials = "";

    // Step 6: Check that both names are not empty
    // This prevent accessing characters that do not exist
    /*[0] accesses the first character of the first name
      toupper() converts that character into uppercase
      += adds the character to the initials string*/
    if (!firstName.empty() && !lastName.empty())
    {
        initials += toupper(firstName[0]);
        initials += toupper(lastName[0]);
    }

    // Step 7: Display the generated username
    cout << "Username: " << username << endl;

    // Step 8: Display the uppercase initials
    cout << "Initials: " << initials << endl;

    // Step 9: End the program successfully
    return 0;
}
