// Copyright (c) 2022 Hunter Connolly All rights reserved
// Created by: Hunter Connolly
// Created on: April 24, 2022
// This program generates a random number between 0 and 9
// It then uses a while TRUE loop  to keep asking the user
// to guess the number until they guess correctly.

#include <iostream>
#include <string>
#include <random>


int main() {
    // declare variables
    std::string userInputString;
    int userInput, randomNumber;

    // generate random number
    std::random_device rseed;

    std::mt19937 rgen(rseed());  //  mersenne_twister

    std::uniform_int_distribution<int> idist(0, 9);  //  [0, 9]

    randomNumber = idist(rgen);

    while (true) {
        // Get the user input as a string
        std::cout << "Guess a random number between 0 and 9: ";
        std::cin >> userInputString;
        std::cout << "\n";

        // calculate the power
        try {
            // cast the input to an int, if it is not a number then it will end
            userInput = std::stoi(userInputString);

            if (userInput == randomNumber) {
                // if the number is negative then it will end the program
                std::cout << "That is Correct!!\n";
                std::cout << "\n";
                break;
            } else {
                std::cout << "Incorrect number! Try Again!\n";
                std::cout << "\n";
                }
        } catch (std::invalid_argument) {
            std::cout << "That is not a number!! Try again! \n";
            std::cout << "\n";
}
}
}
