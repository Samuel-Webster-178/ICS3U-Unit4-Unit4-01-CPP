// Copyright (c) 2022 Samuel Webster All rights reserved
//
// Created by Samuel Webster
// Created on February 2022
// Calculates perimeter and area of a rectangle
//     with dimensions inputted from user

#include <iostream>
#include <string>

int main() {
    // this function how the sum is calculated
    std::string strNumber;
    int intNumber;
    int i = 0;
    int sumNumber = 0;

    // input
    std::cout << "Enter a positive integer: ";
    std::cin >> strNumber;
    std::cout << "" << std::endl;

    // process & output
    try {
        intNumber = std::stoi(strNumber);
        while (i <= intNumber) {
            sumNumber = sumNumber + i;
            i += 1;
        }
        std::cout << "Sum of positive integers up to ";
        std::cout << intNumber << " is " << sumNumber << "." << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "That is not an integer." << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
