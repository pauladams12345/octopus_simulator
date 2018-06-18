/*********************************************************************
 * Program name: Octopus Simulator 3000
 * Author: Paul Adams
 * Date: 03 19 2018
 * Description: Header file for Octopus class. This class represents
 * an Octopus object. The user can add items, stored as strings, to
 * the "items" container by visiting spaces derived from the
 * Neighborhood class and choosing the "interact" menu option.
 * In order to win the game, the user must acquire the "bioluminescent
 * algae" item from the KelpForest, then go to the DeepSea to fish.
 * The user must then return to Den to lay eggs and thus win the game.
 * The game will end if the turns variable reaches zero.
*********************************************************************/

#ifndef FINAL_PROJECT_OCTOPUS_HPP
#define FINAL_PROJECT_OCTOPUS_HPP

#include <vector>
#include <string>


class Octopus {
public:
    Octopus();

    /* Adds an item as determined by the current Space to "items" */
    void addItems(std::string item);

    bool isFed() const;

    void setFed(bool fed);

    bool isAlgae() const;

    void setAlgae(bool algae);

    bool isLaidEggs() const;

    void setLaidEggs(bool laidEggs);

    int getTurns() const;

    void setTurns(int turns);

private:
    std::vector<std::string> items;
    bool fed;
    bool algae;
    bool laidEggs;
    int turns;
};


#endif //FINAL_PROJECT_OCTOPUS_HPP
