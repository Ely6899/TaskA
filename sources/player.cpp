//
// Created by ely6899 on 3/22/23.
//

#include <string>

#include "player.hpp"

Player::Player(string name){
    //this->name = name;

}
Player::~Player() {}

int Player::stacksize() {
    return -1;
}

int Player::cardesTaken() {
    return -1;
}

string Player::getName() {
    return this->name;
}
