/*********************************************************************
 * Program name: Octopus Simulator 3000
 * Author: Paul Adams
 * Date: 03 19 2018
 * Description: Implementation file for Den class. This class represents
 * a Den object, derived from Space. This is where an Octopus object
 * starts the game, and where it must return after acquiring a fish
 * in order to win the game
*********************************************************************/
#include <iostream>
#include "Den.hpp"

Den::Den() : Space("Den") {}

void Den::interact(Octopus *player) {
    if (player->isFed()){
        player->setLaidEggs(true);
        std::cout << std::endl << "You lay your eggs and settle in for the long nap." << std::endl;
    }
    else {
        std::cout << std::endl << "You try to lay your eggs, but your body's just not ready."
                  << std::endl << "You better go find some fish to eat first." << std::endl;
    }
}

void Den::description() {
    std::cout << "You are in your Den. To some, this rocky crevice might seem a little " << std::endl
              << "drab, but to you it's home." << std::endl;
}

Den::~Den() {

}
