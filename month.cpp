// Copyright (c) 2019 Christina Ngwa All rights reserved.
//
// Created by: Christina Ngwa
// Created on: October 2019
// This program checks what month it is with user input

#include <iostream>
#include <string>

int main() {
    // This function checks what month it is
    std::string monthNumberasString;
     int monthNum;

    // input
    std::cout << "Let's figure out what month it is."
    << std::endl;
    std::cout << "Enter a number of a month (1-12). : ";
    std::cin >> monthNumberasString;

    monthNum = atoi(monthNumberasString.c_str());

    // process
    switch (monthNum) {
        case 1 :
            std::cout << "" << std::endl;
            std::cout << "It is January." << std::endl;
            break;
        case 2 :
            std::cout << "" << std::endl;
            std::cout << "It is February." << std::endl;
            break;
        case 3 :
            std::cout << "" << std::endl;
            std::cout << "It is March." << std::endl;
            break;
        case 4 :
            std::cout << "" << std::endl;
            std::cout << "It is April." << std::endl;
            break;
        case 5 :
            std::cout << "" << std::endl;
            std::cout << "It is May." << std::endl;
            break;
        case 6 :
            std::cout << "" << std::endl;
            std::cout << "it is June." << std::endl;
            break;
        case 7 :
            std::cout << "" << std::endl;
            std::cout << "It is July." << std::endl;
            break;
        case 8 :
            std::cout << "" << std::endl;
            std::cout << "It is August." << std::endl;
            break;
        case 9 :
            std::cout << "" << std::endl;
            std::cout << "It is September." << std::endl;
            break;
        case 10 :
            std::cout << "" << std::endl;
            std::cout << "It is October." << std::endl;
            break;
        case 11 :
            std::cout << "" << std::endl;
            std::cout << "It is November.!" << std::endl;
            break;
        case 12 :
            std::cout << "" << std::endl;
            std::cout << "It is Decemeber." << std::endl;
            break;
        default :
            std::cout << "" << std::endl;
            std::cout << "Sorry, that is invaid. "
            "Please try again." << std::endl;
    }
}
