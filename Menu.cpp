/*********************************************************************
 * Program name: Octopus Simulator 3000
 * Author: Paul Adams
 * Date: 03 19 2018
 * Description: Header file for Menu class. This class contains
 * functions to display various menus to the user and perform
 * input validation
*********************************************************************/

#include "Menu.hpp"

int Menu::inputValidation(int min, int max) {
    int input;
    while (true){
        std::cout << "Enter a number from " << min << " to "
                  << max << std::endl;
        std::cin >> input;
        if (input >= min && input <= max){
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return input;
        }
        else {
            std::cout << "Input invalid. Enter another number:\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
}
