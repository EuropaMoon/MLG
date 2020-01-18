//
// Created by maximilian on 18.01.20.
//

#ifndef TEST_PLAYSTATE_H
#define TEST_PLAYSTATE_H

#include <SFML/Graphics/CircleShape.hpp>
#include "GameState.h"

class PlayState : public GameState {
public:
    PlayState();
    ~PlayState();

    void HandleEvents(Game& game) override;
    void Update(Game& game) override;
    void Draw(Game& game) override;

private:
    sf::CircleShape circle;
};

#endif //TEST_PLAYSTATE_H
