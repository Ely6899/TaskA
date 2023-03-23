//
// Created by ely6899 on 3/22/23.
//

#include <iostream>

#include "game.hpp"


Game::Game(Player player1, Player player2) : player1(player1), player2(player2){
    //std::cout << "Created game with players " << player1.getName() << " and " << player2.getName() << std::endl;
}
Game::~Game() {}

void Game::playAll() {}
void Game::playTurn() {}
void Game::printLastTurn() {}
void Game::printLog() {}
void Game::printStats() {}
void Game::printWiner() {}
