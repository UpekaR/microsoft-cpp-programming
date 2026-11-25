
// Convert a number of seconds into hours, minutes and seconds

#include <iostream>
using namespace std;

int main()
{
    int totalSeconds, hours, minutes, seconds;

    // Taking user input
    cout << "Enter total seconds: ";
    cin >> totalSeconds;

    // Convert total seconds
    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    // Print the result
    cout << hours << "h " << minutes << "m "
         << seconds << "s" << endl;

    return 0;
}
