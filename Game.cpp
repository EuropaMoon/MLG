//
// Created by maximilian on 18.01.20.
//

#include "Game.h"
#include "MainMenuState.h"
#include "PlayState.h"

Game::Game() {
    window.create(sf::VideoMode(1200, 720), "Game");
}

void Game::Run() {

    ChangeState(gameStates::MAINMENU);

    while (window.isOpen()) {
        currentState->HandleEvents(*this);
        currentState->Update(*this);
        currentState->Draw(*this);
    }
}

void Game::ChangeState(gameStates newState) {
    switch (newState) {
        case gameStates::MAINMENU:
            currentState = std::move(std::unique_ptr<MainMenuState>(new MainMenuState));
            break;
        case gameStates::PLAY:
            currentState = std::move(std::unique_ptr<PlayState>(new PlayState));
            break;
        case gameStates::CREATE:
            //currentState = std::move(std::unique_ptr<MainMenuState>(new MainMenuState));
            break;
    }
}