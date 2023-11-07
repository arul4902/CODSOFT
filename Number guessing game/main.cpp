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
    
    int attempts = 0;  
    
    while (true) 
    {
        std:: cout << "Enter your Guess: ";
        int guess; 
        std:: cin >> guess;
        attempts++;  
        
        if(guess < num)
        {
            std::cout << "Your Guess is too small, Try again\n";
        }
        else if(guess > num)
        {
            std::cout << "Your Guess is too large, Try again\n";
        }
        else
        {
            std::cout << "Congrats! You have Guessed correctly!\n";
            std::cout << "It took you " << attempts << " attempt(s) to guess the number.\n";  
            std::cout << "Thanks for playing. Have a Nice Day!!\n";
            break;
        }
    }

    return 0;
}