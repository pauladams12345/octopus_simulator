/*********************************************************************
 * Program name: Octopus Simulator 3000
 * Author: Paul Adams
 * Date: 03 19 2018
 * Description: Header file for DesolateCliffs class. This class represents
 * a Desolate Cliffs object, derived from Neighborhood, derived from Space.
 * An Octopus object can interact with this space to find the item
 * "a coconut shell"
*********************************************************************/

#ifndef FINAL_PROJECT_DESOLATECLIFFS_HPP
#define FINAL_PROJECT_DESOLATECLIFFS_HPP


#include "Neighborhood.hpp"

class DesolateCliffs : public Neighborhood {
public:
    DesolateCliffs();

    virtual ~DesolateCliffs();

    /* Prints a description of the space to the console */
    void description() override;
};


#endif //FINAL_PROJECT_DESOLATECLIFFS_HPP
