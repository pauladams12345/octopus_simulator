/*********************************************************************
 * Program name: Octopus Simulator 3000
 * Author: Paul Adams
 * Date: 03 19 2018
 * Description: Implementation file for Neighborhood class. This pure virtual
 * class represents a Neighborhood object, derived from Space.
 * The child classes of Neighborhood all have a unique item, stored
 * as a string, which an Octopus object can add to its items
 * container. Each item can only be added once.
*********************************************************************/

#include <iostream>
#include "Neighborhood.hpp"

Neighborhood::Neighborhood(const std::string &name, const std::string &item)
        : Space(name), item(item) {}

void Neighborhood::interact(Octopus *player) {
    if (!foundItem) {
        player->addItems(item);
        foundItem = true;
        std::cout << std::endl
                  << "You set your tentactles a-searchin' and in no time " << std::endl
                  << "you find " << item << "! You stuff it in your fanny pack." << std::endl;
    }
    else {
        std::cout << std::endl
                  << "You search and search, but your 8 grippy arms can't " << std::endl
                  << "seem to find anything else useful here..." << std::endl;
    }
}

Neighborhood::~Neighborhood() {

}

