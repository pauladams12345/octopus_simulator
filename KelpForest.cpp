/*********************************************************************
 * Program name: Octopus Simulator 3000
 * Author: Paul Adams
 * Date: 03 19 2018
 * Description: Implementation file for KelpForest class. This class represents
 * a Kelp Forest object, derived from Neighborhood, derived from Space.
 * An Octopus object can interact with this space to find the item
 * "bioluminescent algae"
*********************************************************************/

#include <iostream>
#include "KelpForest.hpp"
#include "Constants.hpp"

void KelpForest::interact(Octopus *player) {
    Neighborhood::interact(player);
    player->setAlgae(true);
}

KelpForest::KelpForest() : Neighborhood("Kelp Forest", KELPFOREST_ITEM) {}

void KelpForest::description() {
    std::cout << "You have entered the Kelp Forest. Sunlight filters through the " << std::endl
              << "vibrant green stands of kelp." << std::endl;
}

KelpForest::~KelpForest() {

}
