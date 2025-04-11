#include "Game.h"
#include <ctime>

void GuessingGame::setBounds() {
	std::cout << "Enter the lower bound: ";
	std::cin >> low;
	std::cout << "Enter the upper bound: ";
	std::cin >> up;
	while (low >= up) {
		std::cout << "Minumum number must be less than the maximum number pal.\n";
		
		std::cout << "Enter the lower bound: ";
		std::cin >> low;
		std::cout << "Enter the upper bound: ";
		std::cin >> up;
	}
	resetGuesses();
	generateRandomNumber();
}

void GuessingGame::generateRandomNumber() {
	srand(static_cast<unsigned int>(time(0)));
	theAnswer = rand() % (up - low + 1) + low;
}

std::string GuessingGame::checkGuess(int playersGuess) {
	if (guessesLeft <= 0) {
		return "noguessleft";
	}
	guessesLeft--;

	if (playersGuess == theAnswer) {
		return "correct";
	}
	else if (playersGuess < theAnswer) {
		return "toolow";
	}
	else {
		return "toohigh";
	}

}

int GuessingGame::getGuessesLeft() {
	return guessesLeft;
}

int GuessingGame::getAnswer() {
	return theAnswer;
}

GuessingGame::GuessingGame() {
	low = 0;
	up = 0;
	theAnswer = 0;
	guessesLeft = 3;
}

void GuessingGame::resetGuesses() {
	guessesLeft = 3;

}

bool GuessingGame::remainingGuesses() {
	return guessesLeft > 0;
}



