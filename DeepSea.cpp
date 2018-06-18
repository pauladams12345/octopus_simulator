/*********************************************************************
 * Program name: Octopus Simulator 3000
 * Author: Paul Adams
 * Date: 03 19 2018
 * Description: Implementation file for DeepSea class. This class represents
 * a Deep Sea object, derived from Space. This is where an Octopus object
 * goes in order to hunt for the fish needed to win the game. The
 * octopus will only be successful if it has added "bioluminescent algae"
 * from a Kelp Forest object to its items container.
*********************************************************************/


#include <iostream>
#include "DeepSea.hpp"

DeepSea::DeepSea() : Space("Deep Sea") {}

void DeepSea::interact(Octopus *player) {
    if (player->isAlgae() && !player->isFed()){
        player->setFed(true);
        std::cout << std::endl
                  << "It's extremely dark, but you've brought tools! You pull " << std::endl
                  << "some bioluminescent algae out of your fanny pack and soon " << std::endl
                  << "you're surrounded by tasty fish. You grab fish left and " << std::endl
                  << "right until you're totally gorged. Now head back to your den " << std::endl
                  << "quick to lay your eggs!" << std::endl;
    }
        else if (player->isAlgae() && player->isFed()){
        std::cout << std::endl
                  << "You grab a bunch of fish but are too full to eat them." << std::endl
                  << "Go back to your den to lay your eggs." << std::endl;
    }
    else {
        std::cout << std::endl
                  << "It's pitch black and very cold. You can sense fish swimming " << std::endl
                  << "all around you, but it's too dark to catch them. If only you " << std::endl
                  << "had some sort of tool to help you on your see..." << std::endl;
    }
}

void DeepSea::description() {
    std::cout << "You have entered the Deep Sea. It's not the easiest place to " << std::endl
              << "hunt, but you're a crafty girl." << std::endl;
}

DeepSea::~DeepSea() {

}
