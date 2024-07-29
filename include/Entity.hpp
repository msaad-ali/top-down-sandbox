#pragma once

#include "game-engine.hpp"

class Entity
{
    private:
        int xpos;
        int ypos;

        SDL_Rect rect;

    public:
        Entity(int xpos, int ypos);
        ~Entity();

        void handleEvents();
        void update();
        void render(SDL_Renderer* renderer);
};