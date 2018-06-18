/*********************************************************************
 * Program name: Octopus Simulator 3000
 * Author: Paul Adams
 * Date: 03 19 2018
 * Description: Header file for KelpForest class. This class represents
 * a Kelp Forest object, derived from Neighborhood, derived from Space.
 * An Octopus object can interact with this space to find the item
 * "bioluminescent algae"
*********************************************************************/

#ifndef FINAL_PROJECT_KELPFOREST_HPP
#define FINAL_PROJECT_KELPFOREST_HPP


#include "Neighborhood.hpp"

class KelpForest : public Neighborhood {
public:
    KelpForest();

    virtual ~KelpForest();

    /* If user has not yet acquired item for current space, adds item
     * and sets player.algae to true. */
    void interact(Octopus *player) override;

    /* Prints a description of the space to the console */
    void description() override;
};


#endif //FINAL_PROJECT_KELPFOREST_HPP
