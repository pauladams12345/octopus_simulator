/*********************************************************************
 * Program name: Octopus Simulator 3000
 * Author: Paul Adams
 * Date: 03 19 2018
 * Description: Implementation file for DesolateCliffs class. This class represents
 * a Desolate Cliffs object, derived from Neighborhood, derived from Space.
 * An Octopus object can interact with this space to find the item
 * "a coconut shell"
*********************************************************************/
#include <iostream>
#include "DesolateCliffs.hpp"
#include "Constants.hpp"

DesolateCliffs::DesolateCliffs() : Neighborhood("Desolate Cliffs", DESOLATECLIFFS_ITEM) {}

void DesolateCliffs::description() {
    std::cout << "You have entered the Desolate Cliffs. Just beyond their " << std::endl
              << "edge lies the vastness of the Deep Sea." << std::endl;
}

DesolateCliffs::~DesolateCliffs() {

}
