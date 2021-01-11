/*
 * =====================================================================================
 *
 *       Filename:  GuessTheNumber.cpp
 *
 *    Description:  Exercise 6.35 - Guess-the-Number Game Modification
 *
 *        Version:  1.0
 *        Created:  15/04/16 14:27:45
 *       Revision:  15/04/16 14:53:39
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <random>

#include "GuessTheNumber.hpp"

GuessTheNumber::GuessTheNumber() : gen(std::random_device()()) {
        initialise();
}  // end constructor GuessTheNumber

// initialises and resets member variables
void GuessTheNumber::initialise() {
    _currentState = GameStates::PLAY;

    _randNumber = getRandomNumber();

    _numGuesses = 0;
    _playerGuess = 0;

    // print here so as to avoid having it print ever turn
    std::cout << "I have a number between 1 and 1000." << std::endl;
}

// takes the player guess and compares to number
GameStates GuessTheNumber::guess(int playerGuess) {
    _numGuesses++;

    if (playerGuess == _randNumber) {
        std::cout << "Excellent! You guessed the number!" << std::endl;
        return GameStates::WON;
    }

    printf("Too %s Try again.\n", (playerGuess < _randNumber ? "low" : "high"));
    return GameStates::PLAY;
}

// main game loop
void GuessTheNumber::run() {
    while (_currentState != GameStates::EXIT) {
        if (_currentState == GameStates::PLAY) {
            printf("\nCan you guess my number?\nPlease type your guess: ");
            std::cin >> _playerGuess;

            if (_playerGuess < MIN || _playerGuess > MAX) {
                printf("\nInvalid guess. Your number needs to be between %d and %d\n", MIN, MAX);
                continue;
            }

            _currentState = guess(_playerGuess);
        }
        if (_currentState == GameStates::WON) {
            victoryMessage();

            std::cout << "\nWould you like to play again (y or n)? ";
            std::cin >> _playerContinue;

            if (_playerContinue == 'y') {
                initialise();
            } else {
                _currentState = GameStates::EXIT;
            }
        }
    }
}

// victory message
void GuessTheNumber::victoryMessage() const {
    if (_numGuesses == 10) {
        printf("\nGuesses: %d\nAhah! You know the secret!\n", _numGuesses);
    } else if (_numGuesses < 10) {
        printf("\nGuesses: %d\nEither you know the secret or you got lucky!\n", _numGuesses);
    } else {
        printf("\nGuesses: %d\nYou should be able to do better!\n", _numGuesses);
    }
}

/**
 * Creates a random distribution and returns a value in the range min max.
 * @return int
 */
int GuessTheNumber::getRandomNumber() {
    return std::uniform_int_distribution<int>{MIN, MAX}(gen);
}  // end method getRandomNumber
