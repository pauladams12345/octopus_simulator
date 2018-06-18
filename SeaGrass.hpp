/*********************************************************************
 * Program name: Octopus Simulator 3000
 * Author: Paul Adams
 * Date: 03 19 2018
 * Description: Header file for SeaGrass class. This class represents
 * a Sea Grass object, derived from Neighborhood, derived from Space.
 * An Octopus object can interact with this space to find the item
 * "a rubber ducky."
*********************************************************************/

#ifndef FINAL_PROJECT_SEAGRASS_HPP
#define FINAL_PROJECT_SEAGRASS_HPP


#include "Neighborhood.hpp"

class SeaGrass : public Neighborhood {
public:
    SeaGrass();

    virtual ~SeaGrass();

    /* Prints a description of the space to the console */
    void description() override;
};


#endif //FINAL_PROJECT_SEAGRASS_HPP
