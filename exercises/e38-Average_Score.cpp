
// Read a list of scores and calculate their average

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int count;
    double score, sum = 0.0;

    // Taking user input
    cout << "How many scores do you want to enter? ";
    cin >> count;

    // Read scores and calculate their sum
    for (int i = 1; i <= count; i++)
    {
        cout << "Enter score " << i << ": ";
        cin >> score;

        sum += score;
    }

    // Calculate and print average
    if (count > 0)
    {
        double average = sum / count;

        cout << fixed << setprecision(1);
        cout << "Average: " << average << endl;
    }
    else
    {
        cout << "No scores entered." << endl;
    }

    return 0;
}
