//
// Created by ely6899 on 3/22/23.
//

#ifndef CARDWAR_A_CARD_HPP
#define CARDWAR_A_CARD_HPP

#include <string>

using namespace std;

/*namespace ariel{
    class Card;
}*/

class Card {
    int cardValue;
    string type;

public:
    Card(int cardValue, string type);

};


#endif //CARDWAR_A_CARD_HPP
