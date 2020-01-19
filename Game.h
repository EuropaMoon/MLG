//
// Created by maximilian on 18.01.20.
// The Game class handles the main loop and switches between GameStates

#ifndef TEST_GAME_H
#define TEST_GAME_H

#include "GameState.h"

#include <SFML/Graphics.hpp>
#include <memory>

class Game {
public:
    Game();
    ~Game();

    enum class gameStates { MAINMENU, PLAY, CREATE};

    void Run();
    void ChangeState(gameStates newState);

    sf::RenderWindow window;
    sf::Font font;

private:
    std::unique_ptr<GameState> currentState;
};

#endif //TEST_GAME_H
