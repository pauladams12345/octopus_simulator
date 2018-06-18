/*********************************************************************
 * Program name: Octopus Simulator 3000
 * Author: Paul Adams
 * Date: 03 19 2018
 * Description: Implementation file for Octopus class. This class represents
 * an Octopus object. The user can add items, stored as strings, to
 * the "items" container by visiting spaces derived from the
 * Neighborhood class and choosing the "interact" menu option.
 * In order to win the game, the user must acquire the "bioluminescent
 * algae" item from the KelpForest, then go to the DeepSea to fish.
 * The user must then return to Den to lay eggs and thus win the game.
 * The game will end if the turns variable reaches zero.
*********************************************************************/


#include <iostream>
#include "Octopus.hpp"
#include "Constants.hpp"


void Octopus::addItems(std::string item) {
    if (items.size() <= MAX_ITEMS) {
        items.push_back(item);
    }
    else {
        std::cout << "Sorry, your fanny pack is full!";
    }
}

bool Octopus::isFed() const {
    return fed;
}

void Octopus::setFed(bool fed) {
    Octopus::fed = fed;
}

bool Octopus::isAlgae() const {
    return algae;
}

void Octopus::setAlgae(bool algae) {
    Octopus::algae = algae;
}

bool Octopus::isLaidEggs() const {
    return laidEggs;
}

void Octopus::setLaidEggs(bool laidEggs) {
    Octopus::laidEggs = laidEggs;
}

int Octopus::getTurns() const {
    return turns;
}

void Octopus::setTurns(int turns) {
    Octopus::turns = turns;
}

Octopus::Octopus() : fed(false), algae(false), laidEggs(false), turns(MAX_TURNS) {}
