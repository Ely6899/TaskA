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

    int deckTop = 0;
    int cardsLeft = 26;
    int cardsTaken = 0;


public:
    Player(string name); //Constructor
    ~Player(); //Destructor

    int stacksize(); //Returns cardsLeft - deckTop index.
    int cardesTaken(); //Retuns cardsTaken field.
    string getName();
    Card getDeckTop(); //Gets the element initDeck[deckTop]
};


#endif //CARDWAR_A_PLAYER_HPP
