
//Task 2: Explore Constants and Auto Keyword

/*Now practice using const for unchanging values and auto for automatic type deduction.*/

#include <iostream>

int main()
{
    // Constants for game configuration
    const int MAX_PLAYER_LEVEL = 100;
    const double EXPERIENCE_MULTIPLIER = 1.5;
    const char GOLD_TIER_RATING = 'A';

    // Using auto for type deduction
    auto currentScore = 98500;   // int
    auto averagePlayTime = 45.5; // double
    auto playerInitial = 'M';    // char
    auto isOnline = false;       // bool

    // Three additional auto variables
    auto playerSpeed = 5.5f;  // float
    auto numberOfLives = 3;   // int
    auto playerName = "Alex"; // const char*

    // Calculation using a constant
    double bonusExperience =
        currentScore * EXPERIENCE_MULTIPLIER;

    // Display constants
    std::cout << "Game Configuration:" << std::endl;
    std::cout << "Max Level: " << MAX_PLAYER_LEVEL << std::endl;
    std::cout << "Experience Multiplier: "
              << EXPERIENCE_MULTIPLIER << std::endl;
    std::cout << "Gold Tier Rating: "
              << GOLD_TIER_RATING << std::endl;

    // Display auto variables
    std::cout << "\nPlayer Data (using auto):" << std::endl;
    std::cout << "Score: " << currentScore << std::endl;
    std::cout << "Average Play Time: "
              << averagePlayTime << " hours" << std::endl;
    std::cout << "Initial: " << playerInitial << std::endl;
    std::cout << "Online Status: " << isOnline << std::endl;

    // Display additional auto variables
    std::cout << "Player Speed: " << playerSpeed << std::endl;
    std::cout << "Number of Lives: " << numberOfLives << std::endl;
    std::cout << "Player Name: " << playerName << std::endl;

    // Display calculated bonus experience
    std::cout << "\nBonus Experience: "
              << bonusExperience << std::endl;

    // Uncomment to test changing a constant
    // MAX_PLAYER_LEVEL = 50;

    return 0;
}
