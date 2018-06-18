/*********************************************************************
 * Program name: Octopus Simulator 3000
 * Author: Paul Adams
 * Date: 03 19 2018
 * Description: Header file for Space class. This class represents
 * the physical space in which the octopus moves around in the game
*********************************************************************/

#include <iostream>
#include "Space.hpp"
#include "Menu.hpp"

const std::string &Space::getName() const {
    return name;
}

void Space::setName(const std::string &name) {
    Space::name = name;
}

Space *Space::getN() const {
    return N;
}

void Space::setN(Space *N) {
    Space::N = N;
}

Space *Space::getE() const {
    return E;
}

void Space::setE(Space *E) {
    Space::E = E;
}

Space *Space::getW() const {
    return W;
}

void Space::setW(Space *W) {
    Space::W = W;
}

Space *Space::getS() const {
    return S;
}

void Space::setS(Space *S) {
    Space::S = S;
}

Space::Space(const std::string &name) : name(name) {}

int Space::move() {
    Menu menu1;
    if (N != nullptr) {
        std::cout << "Enter 1 to move north to " << N->getName() << std::endl;
    }
    if (E != nullptr) {
        std::cout << "Enter 2 to move east to " << E->getName() << std::endl;
    }
    if (S != nullptr) {
        std::cout << "Enter 3 to move south to " << S->getName() << std::endl;
    }
    if (W != nullptr) {
        std::cout << "Enter 4 to move west to " << W->getName() << std::endl;
    }

    while (true) {
        int direction = menu1.inputValidation(1, 4);
        if (direction == 1 && N != nullptr) {
            return 1;
        }
        else if (direction == 2 && E != nullptr) {
            return 2;
        }
        else if (direction == 3 && S != nullptr) {
            return 3;
        }
        else if (direction == 4 && W != nullptr) {
            return 4;
        }
        else {
            std::cout << "You cannot go that direction. Please choose another." << std::endl;
        }
    }
}

void Space::setSurroundings(Space *N, Space *E, Space *S, Space *W) {
    this->N = N;
    this->E = E;
    this->S = S;
    this->W = W;
    return;
}

Space::~Space() {

}
