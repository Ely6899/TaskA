//
// Created by ely6899 on 3/22/23.
//

#ifndef CARDWAR_A_PLAYER_HPP
#define CARDWAR_A_PLAYER_HPP

#include <string>

#include "card.hpp"

namespace ariel{}

using namespace std;


class Player {
    string name;

public:
    Player(string name); //Constructor

    int stacksize(); //Returns cardsLeft - deckTop index.
    int cardesTaken(); //Retuns cardsTaken field.
    string getName();
};


#endif //CARDWAR_A_PLAYER_HPP
