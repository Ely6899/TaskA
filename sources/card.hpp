//
// Created by ely6899 on 3/22/23.
//

#ifndef CARDWAR_A_CARD_HPP
#define CARDWAR_A_CARD_HPP

#include <string>

using namespace std;


class Card {
    unsigned int cardValue;
    string type;

public:
    Card(unsigned int cardValue, string type); //Constructor
    ~Card(); //Destructor

    unsigned int getCardValue();
    string getType();
    string to_string();

};


#endif //CARDWAR_A_CARD_HPP
