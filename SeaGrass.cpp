/*********************************************************************
 * Program name: Octopus Simulator 3000
 * Author: Paul Adams
 * Date: 03 19 2018
 * Description: Implementation file for SeaGrass class. This class represents
 * a Sea Grass object, derived from Neighborhood, derived from Space.
 * An Octopus object can interact with this space to find the item
 * "a rubber ducky."
*********************************************************************/

#include <iostream>
#include "SeaGrass.hpp"
#include "Constants.hpp"

SeaGrass::SeaGrass() : Neighborhood("Sea Grass", SEAGRASS_ITEM) {}

void SeaGrass::description() {
    std::cout << "You have entered a massive field of Sea Grass. A pair of " << std::endl
              << "crabs are playing polo on the soft lawn." << std::endl;
}

SeaGrass::~SeaGrass() {

}
