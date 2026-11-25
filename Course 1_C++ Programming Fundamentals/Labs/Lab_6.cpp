
//Task 1: Practice Variable Declaration and Initialization

/*You're creating a player profile system for a game application and need to store different types of information about each player. 
Practice declaring and initializing variables for various data types.*/

#include <iostream>

int main()
{
    // Declare and initialize variables for player data
    int playerLevel = 5;
    double experiencePoints = 1250.75;
    char difficultyRating = 'B';
    bool hasCompletedTutorial = true;

    // Three additional variables
    float playerSpeed = 4.5f;
    short numberOfLives = 3;
    char playerGrade = 'A';

    // Display the player information
    std::cout << "Player Profile:" << std::endl;
    std::cout << "Level: " << playerLevel << std::endl;
    std::cout << "Experience: " << experiencePoints << std::endl;
    std::cout << "Difficulty Rating: " << difficultyRating << std::endl;
    std::cout << "Completed Tutorial: " << hasCompletedTutorial << std::endl;

    // Display the additional variables
    std::cout << "Player Speed: " << playerSpeed << std::endl;
    std::cout << "Number of Lives: " << numberOfLives << std::endl;
    std::cout << "Player Grade: " << playerGrade << std::endl;

    return 0;
}
