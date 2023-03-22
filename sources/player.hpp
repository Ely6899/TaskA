//
// Created by ely6899 on 3/22/23.
//

#ifndef CARDWAR_A_PLAYER_HPP
#define CARDWAR_A_PLAYER_HPP

#include <string>

namespace ariel{
    //class Player;
}

using namespace std;

class Player {
    string name;

public:
    Player(string name); //Player constructor.
    int stacksize();
    int cardesTaken();

};


#endif //CARDWAR_A_PLAYER_HPP
