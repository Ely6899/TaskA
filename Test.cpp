//
// Created by ely6899 on 3/23/23.
//

#include <stdexcept>

#include "doctest.h"
#include "sources/card.hpp"
#include "sources/player.hpp"
#include "sources/game.hpp"


TEST_CASE("Card initialization tests"){
    for(int i = 1; i <= 13; i++){
        CHECK_NOTHROW(Card(i,"Hearts"));
        CHECK_NOTHROW(Card(i,"Spades"));
        CHECK_NOTHROW(Card(i,"Diamonds"));
        CHECK_NOTHROW(Card(i,"Clubs"));
    }
}

TEST_CASE("Card initialization tests (failures)"){
    for(int i = -5; i <= 0; i++){
        CHECK_THROWS_AS(Card(i,"Hearts"), std::exception);
        CHECK_THROWS_AS(Card(i,"Spades"), std::exception);
        CHECK_THROWS_AS(Card(i,"Diamonds"), std::exception);
        CHECK_THROWS_AS(Card(i,"Clubs"), std::exception);
    }

    CHECK_THROWS_AS(Card(2,"type1"), std::exception);
    CHECK_THROWS_AS(Card(2,"type2"), std::exception);
    CHECK_THROWS_AS(Card(2,"Diamond"), std::exception);
    CHECK_THROWS_AS(Card(2,""), std::exception);
}

TEST_CASE("Player initialization"){
    CHECK_NOTHROW(Player("Alice"));
    CHECK_NOTHROW(Player("Bok"));
}