#include <iostream>
#include "Game.hpp"

int main() {
    int keepPlaying = 1;
    Menu menu2;
    while (keepPlaying == 1) {
        Game game;
        game.play();

        std::cout << "Enter 1 to play again, 0 to exit:" << std::endl;
        keepPlaying = menu2.inputValidation(0,1);
    }
    return 0;
}