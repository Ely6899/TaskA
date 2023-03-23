//
// Created by ely6899 on 3/22/23.
//

#include <cassert>

#include "card.hpp"


using namespace std;

Card::Card(unsigned int cardValue, string type) {
/*
    if(cardValue < 1 || cardValue > 14)
        throw string("Invalid card value generated!");

    if(!type.compare("Hearts") && !type.compare("Spades") && !type.compare("Clubs") && !type.compare("Diamonds"))
        throw string("Invalid card type generated!");

    this->cardValue = cardValue;
    this->type = type;
*/

}
Card::~Card() {}

unsigned int Card::getCardValue() {
    return 1;
}

string Card::getType() {
    return "Card type";
}

void Card::setCardValue(unsigned int cardValue){}

void Card::setType(string type){}

string Card::to_string(){
    return "to_string";
}