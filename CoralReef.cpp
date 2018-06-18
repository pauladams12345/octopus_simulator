/*********************************************************************
 * Program name: Octopus Simulator 3000
 * Author: Paul Adams
 * Date: 03 19 2018
 * Description: Implementation file for CoralReef class. This class represents
 * a Coral Reef object, derived from Neighborhood, derived from Space.
 * An Octopus object can interact with this space to find the item
 * "bleached coral"
*********************************************************************/

#include <iostream>
#include "CoralReef.hpp"
#include "Constants.hpp"

CoralReef::CoralReef() : Neighborhood("Coral Reef", CORALREEF_ITEM) {}

void CoralReef::description() {
    std::cout << "You have entered the coral reef. These used to be prime " << std::endl
              << "hunting grounds, but these days it looks more like a graveyard." << std::endl;
}

CoralReef::~CoralReef() {

}
