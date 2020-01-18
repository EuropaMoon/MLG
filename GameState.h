//
// Created by maximilian on 18.01.20.
//

#ifndef TEST_GAMESTATE_H
#define TEST_GAMESTATE_H

class Game;

class GameState {
public:
    virtual void HandleEvents(Game& game) = 0;
    virtual void Update(Game& game) = 0;
    virtual void Draw(Game& game) = 0;
    virtual ~GameState() {};
};

#endif //TEST_GAMESTATE_H
