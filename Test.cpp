//
// Created by ely6899 on 3/23/23.
//

#include <stdexcept>

#include "doctest.h"
#include "sources/card.hpp"
#include "sources/player.hpp"
#include "sources/game.hpp"



TEST_CASE("Player initialization"){ //Shouldn't throw an exception if Initialized with a proper name.
    CHECK_NOTHROW(Player("Alice"));
    CHECK_NOTHROW(Player("Bob"));
}

TEST_CASE("Player initialization (failure)"){ //Should throw a string exception if player initialized with empty string / spaces.
    CHECK_THROWS_AS(Player(""), std::invalid_argument);
    CHECK_THROWS_AS(Player(" "), std::invalid_argument);
}

TEST_CASE("Player function tests tests"){ //Check stacksize() and cardesTaken() are >=0
    Player player{"Ely"};
    CHECK(player.stacksize() >= 0);
    CHECK(player.cardesTaken() >= 0);
}

TEST_CASE("Game initialization"){ //Shouldn't throw an exception if game is initialized with proper players.
    CHECK_NOTHROW(Game(Player("Alice"), Player("Bob")));
}

TEST_CASE("Game initialization failures"){ //Throw string exceptions according to wrong player initializations OR players with the same name.
    CHECK_THROWS_AS(Game(Player(""), Player("Ely")), std::invalid_argument);
    CHECK_THROWS_AS(Game(Player("Ely"), Player("")), std::invalid_argument);
    CHECK_THROWS_AS(Game(Player("Ely"), Player("Ely")), std::invalid_argument);
}

TEST_CASE("Check no stats yet (stats, log, last turn, winner)"){ //Throw string exception when we call print functions before playing the game.
    Game game{Player("Ely"), Player("Bob")};
    CHECK_THROWS_AS(game.printStats(), std::string);
    CHECK_THROWS_AS(game.printLastTurn(), std::string);
    CHECK_THROWS_AS(game.printLog(), std::string);
    CHECK_THROWS_AS(game.printWiner(), std::string);
}

TEST_CASE("No winner before game finish"){ //Throw string exception when trying to print winner before game ended.
    Game game{Player("Ely"), Player("Bob")};
    game.playTurn(); //Still no winner after a single turn.

    CHECK_THROWS_AS(game.printWiner(), std::string);
}

TEST_CASE("Check game ending condition"){ //Throw exception if we try to run a game after it has ended.
    Game game{Player("Ely"), Player("Bob")};
    CHECK_NOTHROW(game.playAll());
    CHECK_THROWS(game.playAll());
}

TEST_CASE("Test game functions"){ //Run a game fully, testing no exception was thrown during the process.
    Game game{Player("Ely"), Player("Bob")};
    CHECK_NOTHROW(game.playTurn());
    CHECK_NOTHROW(game.printLastTurn());
    CHECK_NOTHROW(game.printLog());
    CHECK_NOTHROW(game.printStats());
    CHECK_NOTHROW(game.playAll());
    CHECK_NOTHROW(game.printWiner());
}


