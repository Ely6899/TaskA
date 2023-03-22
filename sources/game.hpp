//
// Created by ely6899 on 3/22/23.
//

#ifndef CARDWAR_A_GAME_HPP
#define CARDWAR_A_GAME_HPP

#include "player.hpp"

/*namespace ariel{
    //class Game;
}*/

using namespace std;

class Game {
    Player player1, player2; //The 2 players of the game.

public:
    Game(Player player1, Player player2);
    void playTurn();
    void printLastTurn();
    void playAll();
    void printWiner();
    void printLog();
    void printStats();
};


#endif //CARDWAR_A_GAME_HPP
