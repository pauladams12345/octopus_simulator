/*********************************************************************
 * Program name: Octopus Simulator 3000
 * Author: Paul Adams
 * Date: 03 19 2018
 * Description: Header file for Menu class. This class contains
 * functions to display various menus to the user and perform
 * input validation
*********************************************************************/

#ifndef MENU_HPP
#define MENU_HPP

#include "Constants.hpp"
#include <iostream>
#include <limits>

class Menu {
public:
    /* Checks if user input an integer between min and max,
     * inclusive. If yes, returns input */
    int inputValidation(int min, int max);
private:

};


#endif //MENU_HPP
