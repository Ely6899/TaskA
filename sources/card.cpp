//
// Created by ely6899 on 3/22/23.
//

#include <cassert>

#include "card.hpp"


using namespace std;

Card::Card(int cardValue, string type) {
/*
    if(cardValue < 1 || cardValue > 14)
        throw string("Invalid card value generated!");

    if(!type.compare("Hearts") && !type.compare("Spades") && !type.compare("Clubs") && !type.compare("Diamonds"))
        throw string("Invalid card type generated!");

    this->cardValue = cardValue;
    this->type = type;
*/
}

int Card::getCardValue() {
    return 1;
}

string Card::getType() {
    return "type";
}

void Card::setCardValue(int cardValue){}

void Card::setType(string type){}

string Card::to_string(){
    return "";
}