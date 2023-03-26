//
// Created by ely6899 on 3/23/23.
//

#include <stdexcept>

#include "doctest.h"
#include "sources/card.hpp"
#include "sources/player.hpp"
#include "sources/game.hpp"



TEST_CASE("Player initialization"){
    CHECK_NOTHROW(Player("Alice"));
    CHECK_NOTHROW(Player("Bob"));
}

TEST_CASE("Player initialization (failure)"){
    CHECK_THROWS_AS(Player(""), std::string);
    CHECK_THROWS_AS(Player(" "), std::string);
}

TEST_CASE("Player function tests tests"){
    Player player{"Ely"};
    CHECK(player.stacksize() >= 0);
    CHECK(player.cardesTaken() >= 0);
}

TEST_CASE("Game initialization"){
    CHECK_NOTHROW(Game(Player("Alice"), Player("Bob")));
}

TEST_CASE("Game initialization failures"){
    CHECK_THROWS_AS(Game(Player(""), Player("Ely")), std::string);
    CHECK_THROWS_AS(Game(Player("Ely"), Player("")), std::string);
    CHECK_THROWS_AS(Game(Player("Ely"), Player("Ely")), std::string);
}

TEST_CASE("Check no stats yet (stats, log, last turn, winner)"){
    Game game{Player("Ely"), Player("Bob")};
    CHECK_THROWS_AS(game.printStats(), std::string);
    CHECK_THROWS_AS(game.printLastTurn(), std::string);
    CHECK_THROWS_AS(game.printLog(), std::string);
    CHECK_THROWS(game.printWiner());
}

TEST_CASE("No winner before game finish"){
    Game game{Player("Ely"), Player("Bob")};
    game.playTurn();

    CHECK_THROWS(game.printWiner());
}

TEST_CASE("Check game ending condition"){
    Game game{Player("Ely"), Player("Bob")};
    CHECK_NOTHROW(game.playAll());
    CHECK_THROWS(game.playAll()); //If game already ended, can't start a new one.
}

TEST_CASE("Test game functions"){
    Game game{Player("Ely"), Player("Bob")};
    CHECK_NOTHROW(game.playTurn());
    CHECK_NOTHROW(game.printLastTurn());
    CHECK_NOTHROW(game.printLog());
    CHECK_NOTHROW(game.printStats());
    CHECK_NOTHROW(game.playAll());
    CHECK_NOTHROW(game.printWiner());
}


