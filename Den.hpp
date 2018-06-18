/*********************************************************************
 * Program name: Octopus Simulator 3000
 * Author: Paul Adams
 * Date: 03 19 2018
 * Description: Header file for Den class. This class represents
 * a Den object, derived from Space. This is where an Octopus object
 * starts the game, and where it must return after acquiring a fish
 * in order to win the game
*********************************************************************/

#ifndef FINAL_PROJECT_DEN_HPP
#define FINAL_PROJECT_DEN_HPP


#include "Space.hpp"

class Den : public Space {
public:
    Den();

    virtual ~Den();

    void interact(Octopus *player) override;

    /* Prints a description of the space to the console */
    void description() override;
};


#endif //FINAL_PROJECT_DEN_HPP
