//
// Created by ely6899 on 3/22/23.
//

#ifndef CARDWAR_A_GAME_HPP
#define CARDWAR_A_GAME_HPP

#include "player.hpp"
#include "card.hpp"


using namespace std;

class Game {
    Player player1, player2; //The 2 players of the game.
    int turnCount = 0; //Number of turns which happened in the game.
    int player1Wins = 0;
    int player2Wins = 0;
    int draws = 0;
    string currRoundStats;
    string winner;

public:
    Game(Player player1, Player player2); //Constructor
    ~Game(); //Destructor

    void playTurn();
    void printLastTurn();
    void playAll();
    void printWiner();
    void printLog();
    void printStats();
};


#endif //CARDWAR_A_GAME_HPP
