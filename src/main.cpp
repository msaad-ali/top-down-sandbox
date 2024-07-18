#include "../include/game-engine.hpp"

int main(int argc, const char*  argv[])
{
    GameEngine game(640, 480);
    game.initialize();

    while (game.running())
    {
        game.handleEvents();
        game.update();
        game.render();
    }

    return 0;
}