//
// Created by maximilian on 18.01.20.
//

#include "PlayState.h"
#include "Game.h"

PlayState::PlayState() {
    circle.setFillColor(sf::Color::Red);
    circle.setPosition(100, 100);
    circle.setRadius(10);
}

PlayState::~PlayState() {}

void PlayState::HandleEvents(Game &game) {

}

void PlayState::Update(Game &game) {
    if (sf::Mouse::getPosition(game.window).x < 600) {
        game.ChangeState(Game::gameStates::MAINMENU);
    }
}

void PlayState::Draw(Game &game) {
    game.window.draw(circle);
    game.window.display();
}