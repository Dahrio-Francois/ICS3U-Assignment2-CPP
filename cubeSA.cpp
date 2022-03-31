// Copyright (c) 2022 Dahrio Francois All rights reserved
//
// Created by: Dahrio Francois
// Created on: Feb 2022
// This program calculates the surface area of a cube
//      with user input

#include <iostream>
#include <cmath>

int main() {
    // this function calculates the surface area
    int integer;
    int calculation;

    // input
    std::cout << "Enter in the integer you wish to calculate: ";
    std::cin >> integer;

    // process
    calculation = 6 * pow(integer , 2);


    // output
    std::cout << "" << std::endl;
    std::cout << "6" << " * " << integer << "^2 "
    << " = " << calculation << std::endl;
}
