/*********************************************************************
 * Program name: Octopus Simulator 3000
 * Author: Paul Adams
 * Date: 03 19 2018
 * Description: Header file for DeepSea class. This class represents
 * a Deep Sea object, derived from Space. This is where an Octopus object
 * goes in order to hunt for the fish needed to win the game. The
 * octopus will only be successful if it has added "bioluminescent algae"
 * from a Kelp Forest object to its items container.
*********************************************************************/

#ifndef FINAL_PROJECT_DEEPSEA_HPP
#define FINAL_PROJECT_DEEPSEA_HPP


#include "Space.hpp"

class DeepSea : public Space {
public:
    DeepSea();

    virtual ~DeepSea();

    /* If player.algae == true, sets player.fed to true */
    void interact(Octopus *player) override;

    /* Prints a description of the space to the console */
    void description() override;
};


#endif //FINAL_PROJECT_DEEPSEA_HPP
