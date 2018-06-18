/*********************************************************************
* Program name: Octopus Simulator 3000
* Author: Paul Adams
        * Date: 03 19 2018
* Description: Implementation file for Game class. This class is used to
        * create and run the the game and contains helper functions
        * and data structures to facilitate gameplay
*********************************************************************/

#include <iostream>
#include "Game.hpp"
#include "KelpForest.hpp"
#include "DesolateCliffs.hpp"
#include "DeepSea.hpp"
#include "SeaGrass.hpp"
#include "Den.hpp"
#include "CoralReef.hpp"
#include "Constants.hpp"

Game::Game() {
    world[0][0] = new KelpForest;
    world[1][0] = new DesolateCliffs;
    world[2][0] = new DeepSea;
    world[0][1] = new SeaGrass;
    world[1][1] = new Den;
    world[2][1] = new CoralReef;

    world[0][0]->setSurroundings(nullptr, world[1][0], world[0][1], nullptr);
    world[1][0]->setSurroundings(nullptr, world[2][0], world[1][1], world[0][0]);
    world[2][0]->setSurroundings(nullptr, nullptr, world[2][1], world[1][0]);
    world[0][1]->setSurroundings(world[0][0], world[1][1], nullptr, nullptr);
    world[1][1]->setSurroundings(world[1][0], world[2][1], nullptr, world[0][1]);
    world[2][1]->setSurroundings(world[2][0], nullptr, nullptr, world[1][1]);

    player = new Octopus;
    currentSpace = world[1][1];
    return;
}

Game::~Game() {
    for (int i = 0; i < SIZE_X; ++i){
        for (int j = 0; j < SIZE_Y; ++j){
            delete world[i][j];
        }
    }
    delete player;
}

void Game::play() {
    displayGoal();
    while (checkGameNotOver()){
        startTurn();
    }
    return;
}

void Game::displayGoal() {
    std::cout << "Welcome to Octopus Simulator 3000!" << std::endl << std::endl
              << "You are a Giant Pacific Octopus preparing to lay your eggs." << std::endl
              << "Before you do this, you need to hunt for one last big meal." << std::endl
              << "There are a variety environments around you, but this time " << std::endl
              << "of year the best hunting is found in the Deep Sea--a dark " << std::endl
              << "and scary place. Fortunately, you are a clever girl who is " << std::endl
              << "prepared to use anything and everything at your disposal " << std::endl
              << "to complete your mission. Now, go get the fishy, Squishy!" << std::endl;

}

int Game::displayMenu(Space *currentSpace) {
    currentSpace->description();
    std::cout << ". Please choose an action: " << std::endl
              << "1. Interact with the space" << std::endl
              << "2. Move to a new space" << std::endl;
    return menu.inputValidation(1,2);
}

bool Game::checkGameNotOver() {
    if (player->isLaidEggs()){
        std::cout << "You win! Soon thousands of your tiny babies will be " << std::endl
                  << "bumbling about the ocean. Now you can starve to death " << std::endl
                  << "in peace. (Sorry, octopus motherhood is kind of a bummer)." << std::endl << std::endl;
        return false;
    }
    else if (player->getTurns() <= 0){
        std::cout << "You starved to death! That suck(er)s." << std::endl << std::endl;
        return false;
    }
    else {
        return true;
    }

}

void Game::startTurn() {
    std::cout << std::endl << std::endl << "Turns left: " << player->getTurns() << std::endl;
    player->setTurns(player->getTurns() - 1);
    int choice = displayMenu(currentSpace);
    if (choice == 1) {
        currentSpace->interact(player);
    }
    else {
        int direction = currentSpace->move();
        switch (direction) {
            case 1:
                currentSpace = currentSpace->getN();
                break;
            case 2:
                currentSpace = currentSpace->getE();
                break;
            case 3:
                currentSpace = currentSpace->getS();
                break;
            case 4:
                currentSpace = currentSpace->getW();
                break;
        }
    }
}
