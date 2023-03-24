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
    CHECK_THROWS_AS(Card(0,"Hearts"), std::exception);
    CHECK_THROWS_AS(Card(-5,"Spades"), std::exception);
    CHECK_THROWS_AS(Card(-50,"Diamonds"), std::exception);
    CHECK_THROWS_AS(Card(-1000,"Clubs"), std::exception);

    CHECK_THROWS_AS(Card(2,"type1"), std::exception);
    CHECK_THROWS_AS(Card(2,"type2"), std::exception);
    CHECK_THROWS_AS(Card(2,"Diamond"), std::exception);
    CHECK_THROWS_AS(Card(2,""), std::exception);
}

TEST_CASE("Player initialization"){
    CHECK_NOTHROW(Player("Alice"));
    CHECK_NOTHROW(Player("Bob"));
}

TEST_CASE("Player initialization (failure)"){
    CHECK_THROWS_AS(Player(""), std::exception);
}

TEST_CASE("Player function tests tests"){
    Player player{"Ely"};
    CHECK(player.stacksize() >= 0);
    CHECK(player.cardesTaken()>= 0);
}

TEST_CASE("Game initialization"){
    CHECK_NOTHROW(Game(Player("Alice"), Player("Bob")));
}

TEST_CASE("Game initialization failures"){
    CHECK_THROWS_AS(Game(Player(""), Player("Ely")), std::exception);
    CHECK_THROWS_AS(Game(nullptr, nullptr), std::exception);
    CHECK_THROWS_AS(Game(NULL, NULL), std::exception);
}

TEST_CASE("Test playTurn"){

}

