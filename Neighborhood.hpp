/*********************************************************************
 * Program name: Octopus Simulator 3000
 * Author: Paul Adams
 * Date: 03 19 2018
 * Description: Header file for Neighborhood class. This pure virtual
 * class represents a Neighborhood object, derived from Space.
 * The child classes of Neighborhood all have a unique item, stored
 * as a string, which an Octopus object can add to its items
 * container. Each item can only be added once.
*********************************************************************/


#ifndef FINAL_PROJECT_NEIGHBORHOOD_HPP
#define FINAL_PROJECT_NEIGHBORHOOD_HPP


#include "Space.hpp"

class Neighborhood : public Space {
public:
    Neighborhood() {};

    virtual ~Neighborhood();

    Neighborhood(const std::string &name, const std::string &item);

    /* If user has not yet acquired item for current space, adds item. */
    virtual void interact(Octopus *player);

private:
    std::string item;
    bool foundItem = false;
};


#endif //FINAL_PROJECT_NEIGHBORHOOD_HPP
