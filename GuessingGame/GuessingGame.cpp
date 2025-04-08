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

        while (game.remainingGuesses()) {
            int guess;
            std::cout << "Enter your guess: ";
            cin >> guess;

            string result = game.checkGuess(guess);

            if (result == "correct") {

                std::cout << "You got it right! Yippee!" << endl;
                break;
            }
            else if (result == "toolow") {
                std::cout << "Too Low!!!" << endl;
            }
            else if (result == "toohigh") {
                std::cout << "Too High!!!" << endl;
            }
            else if (result == "noguessleft") {
                std::cout << " Out of guesses! The answer was " << game.getAnswer() << ". Better luck next time!" << endl;
                break;
            }

            std::cout << "Guesses left: " << game.getGuessesLeft() << endl;
        }

        

        std::cout << "\n Would you like to play again? (y/n): ";
        cin >> playAgain;
        std::cout << endl;
    }

    std::cout << "Thanks for playing!" << endl;
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
