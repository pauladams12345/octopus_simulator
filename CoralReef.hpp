/*********************************************************************
 * Program name: Octopus Simulator 3000
 * Author: Paul Adams
 * Date: 03 19 2018
 * Description: Header file for CoralReef class. This class represents
 * a Coral Reef object, derived from Neighborhood, derived from Space.
 * An Octopus object can interact with this space to find the item
 * "bleached coral"
*********************************************************************/

#ifndef FINAL_PROJECT_CORALREEF_HPP
#define FINAL_PROJECT_CORALREEF_HPP


#include "Neighborhood.hpp"

class CoralReef : public Neighborhood {
public:
    CoralReef();

    virtual ~CoralReef();

    /* Prints a description of the space to the console */
    void description() override;
};


#endif //FINAL_PROJECT_CORALREEF_HPP
