//
// Created by maximilian on 18.01.20.
//

#ifndef TEST_GAME_H
#define TEST_GAME_H

#include "GameState.h"

#include <SFML/Graphics.hpp>
#include <memory>

class Game {
public:
    Game();

    enum class gameStates { MAINMENU, PLAY, CREATE};

    void Run();
    void ChangeState(gameStates newState);

    sf::RenderWindow window;

private:
    std::unique_ptr<GameState> currentState;
};

#endif //TEST_GAME_H
