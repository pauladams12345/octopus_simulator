/*********************************************************************
 * Program name: Octopus Simulator 3000
 * Author: Paul Adams
 * Date: 03 19 2018
 * Description: Header file for Game class. This class is used to
 * create and run the the game and contains helper functions
 * and data structures to facilitate gameplay
*********************************************************************/

#ifndef FINAL_PROJECT_GAME_HPP
#define FINAL_PROJECT_GAME_HPP


#include "Space.hpp"
#include "Octopus.hpp"
#include "Menu.hpp"
#include "Constants.hpp"

class Game {
public:
    /* Dynamically allocates a grid of spaces (world) and an Octopus object
     * (player). Sets currentSpace to the Den space in world. */
    Game();

    /* Deallocates world and player. */
    virtual ~Game();

    /* Prints introduction message. Continues gameplay until the player wins
     * the game or runs out of turns */
    void play();

    /* Prints an introductory message to the user explaining the goal
     * of the game */
    void displayGoal();

    /* Prompts the user to choose between interacting with the current space
     * or moving to a new one */
    int displayMenu(Space *currentSpace);

    /* If the Octopus object has laid its eggs, prints a victory message
     * and returns false. Else if turns has reached zero, prints a game
     * over message and returns false. Else returns true */
    bool checkGameNotOver();

    /* Prints turns remaining. Decrements turns. Displays menu for current
     * space via displayMenu. Depending on choice use makes, either calls
     * interact for current space or move. */
    void startTurn();
private:
    Space *world[SIZE_X][SIZE_Y];
    Space *currentSpace;
    Octopus *player;
    Menu menu;

};


#endif //FINAL_PROJECT_GAME_HPP
