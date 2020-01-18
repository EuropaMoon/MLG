//
// Created by maximilian on 18.01.20.
//

#include "MainMenuState.h"
#include "Game.h"

MainMenuState::MainMenuState() {
    circle.setFillColor(sf::Color::Blue);
    circle.setPosition(100, 100);
    circle.setRadius(10);
}

MainMenuState::~MainMenuState() {}

void MainMenuState::HandleEvents(Game &game) {

}

void MainMenuState::Update(Game &game) {
    if (sf::Mouse::getPosition(game.window).x > 600) {
        game.ChangeState(Game::gameStates::PLAY);
    }
}

void MainMenuState::Draw(Game &game) {
    game.window.draw(circle);
    game.window.display();
}