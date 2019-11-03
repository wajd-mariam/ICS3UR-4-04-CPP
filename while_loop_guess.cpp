// Copyright (c) 2019 Wajd Mariam All rights reserved.
//
// Created by: Wajd Mariam
// Created on: November 2019
// This is a number guessing program using while loop

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));  // seed random number generator

    std::string number;
    int integerNumber;
    int random_number = rand() % 5 + 1;

    while (true) {
            // input
            std::cout << "Can you guess a number from 0-5? ";
            std::cin >> number;
            try {
                integerNumber = std::stoi(number);
            if (integerNumber == random_number) {
                std::cout << "You guessed it :)";
                break;
            }  else {
                std::cout << "You couldn't guess it   ";
                }
            }
            catch (std::invalid_argument) {
                std::cout << "Invalid entry";
                break;
            }
    }
}
