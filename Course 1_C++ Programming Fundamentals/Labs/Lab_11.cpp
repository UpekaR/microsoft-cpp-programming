
// Task 1: Master Arithmetic Operations
// Create a system that evaluates player qualifications for different game achievements based on multiple criteria.

#include <iostream>
using namespace std;

int main()
{
    // Player statistics
    int baseScore = 90; // Changed from 85 to 90
    int bonusPoints = 15;
    int timeBonus = 10;

    // Basic calculations
    int totalScore = baseScore + bonusPoints + timeBonus;
    cout << "Total Score: " << totalScore << endl;

    // Division and modulus examples
    int averageScoreInt = totalScore / 3;   // Integer division
    double averageScore = totalScore / 3.0; // Decimal division
    int remainder = totalScore % 10;        // Remainder

    cout << "Average per section (integer): " << averageScoreInt << endl;
    cout << "Average per section (double): " << averageScore << endl;
    cout << "Score remainder: " << remainder << endl;

    // Multiplication operation - Score multiplier
    int multiplier = 2;
    int multipliedScore = totalScore * multiplier;

    cout << "Score Multiplier: " << multiplier << "x" << endl;
    cout << "Final Score: " << multipliedScore << endl;

    return 0;
}
