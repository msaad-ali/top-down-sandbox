#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class Entity
{
    private:
        int xpos;
        int ypos;

        SDL_Rect rect;

    public:
        Entity(int xpos, int ypos);
        ~Entity();

        virtual void handleEvents();
        virtual void update();
        virtual void render(SDL_Renderer* renderer);
};