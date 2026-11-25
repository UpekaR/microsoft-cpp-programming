
// Convert a score into a letter grade

#include <iostream> // For input (cin) and output (cout)
using namespace std;

int main()
{
    // Declare variables to store the score and letter grade
    int score;
    char grade;

    // Ask the user to enter a score between 0 and 100
    cout << "Enter your score (0-100): ";
    cin >> score;

    // Check if the score is within the valid range
    if (score < 0 || score > 100)
    {
        cout << "Invalid score. Please enter a score between 0 and 100." << endl;
        return 1; // Exit the program with an error code
    }

    // Determine the letter grade based on the score
    if (score >= 90)
    {
        grade = 'A';
    }
    else if (score >= 80)
    {
        grade = 'B';
    }
    else if (score >= 70)
    {
        grade = 'C';
    }
    else if (score >= 60)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }

    // Display the letter grade
    cout << "Your grade is: " << grade << endl;

    return 0;
}