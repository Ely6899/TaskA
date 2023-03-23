//
// Created by ely6899 on 3/22/23.
//

#ifndef CARDWAR_A_CARD_HPP
#define CARDWAR_A_CARD_HPP

#include <string>

using namespace std;


class Card {
    int cardValue;
    string type;

public:
    Card();
    Card(int cardValue, string type); //Constructor
    ~Card(); //Destructor

    int getCardValue();
    string getType();

    void setCardValue(int cardValue);
    void setType(string type);

    string to_string();

};


#endif //CARDWAR_A_CARD_HPP
