/*TASK 1
    
    Create a program that generates a random number and asks the
user to guess it. Provide feedback on whether the guess is too
high or too low until the user guesses the correct number. */

#include<iostream>
#include<ctime>

int main()
{
    std::cout << "Hello, champions-in-the-making! The game is calling, so let's answer with enthusiasm.\n";
    std::cout << "Enter the Guess limit: \n";
    int limit; 
    std::cin >> limit;
    srand( time(0) ^ clock() );
    const int num = rand() % limit;

    int maxAttempts = 10; // Set your desired maximum number of attempts.
    int attempts = 0;

    while (attempts < maxAttempts)
    {
        std::cout << "Enter your Guess (Attempt " << attempts + 1 << "/" << maxAttempts << "): ";
        int guess; 
        std::cin >> guess;
        attempts++;

        if (guess < num)
        {
            std::cout << "Your Guess is too small, Try again\n";
        }
        else if (guess > num)
        {
            std::cout << "Your Guess is too large, Try again\n";
        }
        else
        {
            std::cout << "Congrats! You have Guessed correctly!!\n";
            std::cout << "It took you " << attempts << " attempt(s) to guess the number.\n";
            std::cout << "Thanks for playing. Have a Nice Day!\n";
            break;
        }
    }

    if (attempts == maxAttempts)
    {
        std::cout << "Sorry, you've reached the maximum number of attempts (" << maxAttempts << "). The correct number was " << num << ". Better luck next time!\n";
    }

    return 0;
}
