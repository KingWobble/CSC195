// GuessingGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Game.h"
using namespace std;

int main()
{
    char playAgain = 'y';

    while (playAgain == 'y' || playAgain == 'Y') {
        GuessingGame game;
        game.setBounds();

        int playerGuess;
        std::string result;

        while (game.remainingGuesses()) {
            std::cout << "Enter your guess: ";
            std::cin >> playerGuess;
            result = game.checkGuess(playerGuess);

            if (result == "correct") {
                std::cout << "You guessed correctly! The answer was: " << game.getAnswer() << std::endl;
                break;
            }
            else if (result == "toolow") {
                std::cout << "Too low Pal! Try again." << std::endl;
            }
            else if (result == "toohigh") {
                std::cout << "Too high Amigo! Try again." << std::endl;
            }
        }

        if (result != "correct") {
            std::cout << "Out of guesses! The correct answer was: " << game.getAnswer() << std::endl;
        }

        cout << "\nWould you like to play again? (y/n): ";
        cin >> playAgain;
        cout << endl;

    }
    cout << "Thanks for playing!" << endl;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
