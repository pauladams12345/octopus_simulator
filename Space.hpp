/*********************************************************************
 * Program name: Octopus Simulator 3000
 * Author: Paul Adams
 * Date: 03 19 2018
 * Description: Header file for Space class. This class represents
 * the physical space in which the octopus moves around in the game
*********************************************************************/

#ifndef FINAL_PROJECT_SPACE_HPP
#define FINAL_PROJECT_SPACE_HPP

#include <string>
#include "Octopus.hpp"


class Space {
public:
    Space() {};

    virtual ~Space();

    Space(const std::string &name);

    /* Sets the N, S, E, and W pointers to point to the appropriate locations
     * in the world grid from Game */
    void setSurroundings(Space *N, Space *E, Space *S, Space *W);

    const std::string &getName() const;

    void setName(const std::string &name);

    Space *getN() const;

    void setN(Space *N);

    Space *getE() const;

    void setE(Space *E);

    Space *getW() const;

    void setW(Space *W);

    Space *getS() const;

    void setS(Space *S);

    /* Display all possible moves. Get choice from user. Check if move is valid.
     * If yes return choice, else get new choice */
    int move();

    /*  */
    virtual void interact(Octopus *player) = 0;

    /* Prints a description of the space to the console */
    virtual void description() = 0;

private:
    std::string name;

    //Pointers to the spaces to the north, south, east, and west of the current space
    Space *N;
    Space *E;
    Space *W;
    Space *S;
};


#endif //FINAL_PROJECT_SPACE_HPP
