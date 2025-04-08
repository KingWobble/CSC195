#pragma once
#include <iostream>
#include <string>


class GuessingGame {
public: 
	void setBounds();
	int getGuessesLeft();
	bool remainingGuesses();
	int getAnswer();
	std::string checkGuess(int playersGuess);
	GuessingGame();

private:
	int theAnswer;
	int low;
	int up;
	int guessesLeft;
	void generateRandomNumber();
	void resetGuesses();
};
